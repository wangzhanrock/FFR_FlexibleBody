import os
import shutil
from analyzeInputFile import *
import numpy as np
import math
from operator import itemgetter

class extract4MBSim:
    def __init__(self, inputDir, outputDir = None):
        self.inputDirectory = inputDir
        
        if outputDir is None:
            self.outputDirectory = os.path.join(self.inputDirectory, 'MBSimData')
        else:
            self.outputDirectory = outputDir
            
        try:
            os.makedirs(self.outputDirectory)
        except:
            pass
        
        self.numOfNodes = len(readNodes(inputDir))
        
    def dlmread(self, filename, delimiter=','):
        import csv
        data = []
        for row in csv.reader(open(filename), delimiter=delimiter):
            numrow = []
            for i in range(len(row)):
                if i < 4:
                    numrow.append(int(row[i]))
                else:
                    numrow.append(float(row[i]))
            data.append(numrow)
        return np.array(data)
    
    def readmtx(self, filename):
        '''
        Copied from the internet (don't know where, don't know when
        
        NOTES: 
        The stiffness matrix contained in the .mtx file is a [N x 5] matrix 
        where N is the number of non-zero stiffness values in the global stiffness matrix. 
        Each row in this file lists the stiffness between two degrees of freedom in the finite element model. 
        The stiffness value is contained in the 5th column of the .mtx file. 
        
        Columns 1 and 2 of the .mtx file contain the numbers of two nodes that the stiffness value connects. 
        Columns 3 and 4 specify which degree of freedom from the nodes specified by columns 1 and 2 are 
        connected by the stiffness value in column 5.
        
        The sparse matrix that is output by this file is organized such that
        the value of each element is a stiffness value and the row and column
        numbers of the particular element correspond to the degrees of freedom
        that it connects. 
        The rows are numbered such that odd numbers correspond to degrees of freedom in the X-direction 
        and even numbers correspond to degrees of freedom in the Y-direction.
        '''
        abaqus_matrix = self.dlmread(filename); 
        # merge node number info from column 1 and DOF info from column 2 and 
        # store in the 1st column of a new matrix
        nodes1 = 2*np.subtract(abaqus_matrix[:,0],1) + abaqus_matrix[:,1] 
        # merge node number info from column 3 and DOF info from column 4 and 
        # store in the 2nd column of a new matrix
        nodes2 = 2*(abaqus_stiffness_matrix[:,2]-1)+ abaqus_stiffness_matrix[:,3] 
        # extract the stiffness values from the .mtx file, and store in a double 
        # length vector
        stiffness_values = [abaqus_stiffness_matrix[:,5], abaqus_stiffness_matrix[:,5]];
        
        # create a matrix of the new matlab node numbers, and a vector of indices 
        # of their position in the abaqus stiffness matrix
        #[matlab_matrix_indices, abaqus_stiffness_value_index] = unique([matlab_nodes; matlab_nodes(:,2) matlab_nodes(:,1)], 'rows'); 
        # compile the stiffness matrix using the new node numbering convention
        #matlab_stiffness_matrix = accumarray( matlab_matrix_indices, stiffness_values(abaqus_stiffness_value_index), [], @max, [], true);

        
    
    def extractmij(self):
        '''
        Extract the lumped masses of the nodes
        '''
        dirs = os.listdir(self.inputDirectory)
        massOutputFileName = 'mij.dat'
        
        for filename in dirs:
            if "MASS" in filename and ".mtx" in filename:
                massfilename = self.inputDirectory + os.sep + filename
                massFile = open(massfilename, 'r')
                break; 
        
        allLines = massFile.readlines()
        
        mij = []
        
        for index in range(len(allLines) / 3):
            entries = allLines[index * 3].split(',')
            #mij.append(float(entries[-1][:-2]))
            mij.append(entries[-1][:-2])
        
        massFile.close()
        
        # output mij to the output folder
        mijFileName = os.path.join(self.outputDirectory, massOutputFileName)
        mijOutput = open(mijFileName,'w')

        totalMass = 0.
        
        for index in range(len(mij)):
            mijOutput.write(str(mij[index]) + '\n')
            totalMass += float(mij[index])
        mijOutput.close()

        print "Total Mass is ", totalMass
        
    def extractStiffness(self):
        '''
        Extract the stiffness matrix to a file
        '''
        dirs = os.listdir(self.inputDirectory)
        ###########################################################################
        # lumped mass mij extraction
        ###########################################################################
        # stiffnessInputFileEnding = 'STIF1.mtx'
        stiffnessOutputFileName = 'stiffnessMatrix.dat'
        
        for inputFile in dirs:
            if "STIF" in inputFile and ".mtx" in inputFile:
                srcfile = os.path.join(self.inputDirectory, inputFile)
                dstfile = os.path.join(self.outputDirectory, stiffnessOutputFileName)
                shutil.copyfile(srcfile, dstfile)
                return

    def extractu0(self):
        '''
        Extract the mode vectors
        '''
        nodes = readNodes(self.inputDirectory)
        outputFile = open(os.path.join(self.outputDirectory, 'u0.dat'),'w')
        
        for key, value in nodes.iteritems():
            for pos in value:
                outputFile.write(str(pos).rjust(17))
            outputFile.write('\n')
        outputFile.close()
        
    def extractModes(self):
        '''
        Extract the mode-Shape matrix
        '''
        modeOutputFileName = 'modeShapeMatrix.dat'
         
        modeFile = open(getOutputFile(self.inputDirectory))
            
        offset = 10
        # numOfModes = arg  # It is alread be able to search the number of eigenvalue. but for test, we just print out half
        #                 # of all eigenvectors.   
                        
        ## this is to extract all the mode shape vector
        # for line in modeFile:
        #     if line.startswith("     NUMBER OF EIGENVALUES"):
        #         numOfModes = int(line.split()[3])
        #            
        # print numOfModes
        # modeFile.close()
        # modeFile = open(dirInput + os.sep + inputFile, 'r')
        
             
        allLines = modeFile.readlines()        
        allModes = [ ]
        
        try:
            while 1: 
                blockStartIndex = allLines.index("                                       N O D E   O U T P U T\r\n")
                modeVectorStartIndex = blockStartIndex + offset
                modeVectorEndIndex = allLines[modeVectorStartIndex:].index("\r\n")  - 1
                modeVectorEndIndex += modeVectorStartIndex
                
                modeM = allLines[modeVectorStartIndex:modeVectorEndIndex + 1]
                currMode = []
                j = 1
                for i in range(len(modeM)):
            #         print "j = ", j , "\n"
            #         print "i = ", i , "\n"
            #         print "modeM[i].split()[0] = ", modeM[i].split()[0] , "\n"
            #         print "modeM[i].split()[0] = ", modeM[i].split()[1:] , "\n"
                    while (j != int(modeM[i].split()[0])):
                        #print "j in while = ", j , "\n"
                        currMode.extend(['0','0','0'])
                        j = j + 1
            #         print "modeM[i].split()[0] = ", modeM[i].split()[1:] , "\n"
                    currMode.extend(modeM[i].split()[1:])
                    j = j + 1
                
                allModes.append(currMode)
                allLines = allLines[modeVectorEndIndex + 1 :]
                
        except:
            pass
            
        finally:
            outputFile = open(os.path.join(self.outputDirectory, modeOutputFileName),'w')
            outLength = len (allModes)
            outWidth = len(allModes[0])
            for j in range(outWidth):            
                for i in range(outLength):
                     outputFile.write(allModes[i][j].rjust(15))
                outputFile.write('\n')
                    
    def extractRingNodes(self):
        class RadiusAngleNode:
            def __init__(self, number, radius, phi):
                self.number = number
                self.phi = phi
                self.radius = radius
            def __repr__(self):
                return repr((self.number, self.radius, self.phi))
            
        def computeRadiusAndPhi(node, midpoint, idx = 0, idy = 2):
            p = node - midpoint
            p =np.array([p[idx], p[idy]])
            r = np.linalg.norm(p,2)
            e = np.array([1,0])
            phi = math.acos(np.dot(p, e) / (np.linalg.norm(p) * np.linalg.norm(e)))
            if p[1] < 0:
                phi = 2 * math.pi - phi
            
            return [r, phi]
        
        surfaceName = 'Surface'
        midpoint = np.array([0,0,0])
        
        nodes = readNodes(self.inputDirectory)
        surfaceNodes = readSurfaceNodes(self.inputDirectory, surfaceName)
                    
        allNodesRPhi =  []
        for nodeNumber in surfaceNodes:
            [R, phi] = np.round(computeRadiusAndPhi(nodes[nodeNumber], midpoint), 2)
            allNodesRPhi.append(RadiusAngleNode(nodeNumber, R, phi))
        
        '''
        Find surfaces with same phi
        '''
        circles = {}
        for node in sorted(allNodesRPhi, key=lambda node: node.phi):
            if node.phi not in circles:
                circles[node.phi] = []
            circles[node.phi].append(node)
            
        outstring = "["
        for phi in sorted(circles, reverse = True):
            for node in sorted(circles[phi], key=lambda node: node.radius):
                outstring +=  str(node.number) + ','
            outstring = outstring[:-1] + ';'
        outstring = outstring[:-1] + ']'
             
        outputFile = os.path.join(self.outputDirectory, surfaceName+'_Rings.txt')
        f = open(outputFile, 'w')
        f.write(outstring)
        f.close()
        
    def extractNeutralPhase(self):
        
        nodes = readNodes(self.inputDirectory)
                    
        sortNodes = {}
        for nodeNumber in nodes:
            if np.linalg.norm(nodes[nodeNumber][1:3],2) < 1e-5:
                sortNodes[nodes[nodeNumber][0]] = nodeNumber
                
        '''
        Sort points along x-direction
        '''
        outstring = "["
        for node, value in sorted(sortNodes.iteritems()):
            outstring +=  str(value) + ';'
        outstring = outstring[:-1] + ']'
        
        outputFile = os.path.join(self.outputDirectory, 'NeutralPhase.txt')
        f = open(outputFile, 'w')
        f.write(outstring)
        f.close()