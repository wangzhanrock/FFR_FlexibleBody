#!/usr/bin/python

import os
import numpy as np
from numpy  import *
from __main__ import *

dirs = os.listdir(dirInput)
# print "Files in the input folder: ", dirs

###########################################################################
# Mode vectors extraction
###########################################################################
modeInputFileEnding = '.dat'
modeOutputFileName = 'modeShapeMatrix.dat'

 
for inputFile in dirs:
    if inputFile.endswith(modeInputFileEnding):
        modeFile = open(dirInput + os.sep + inputFile, 'r')
        break; 
    
print "\nThe input file for mode shape extraction is ", dirInput + os.sep + inputFile  

offset = 10
modeIndex= 0 
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
mode2D = [ [] for i in range(numOfModes)]

for i in range(numOfModes):
    print "*************************mode:", modeIndex, "*******************************"
    blockStartIndex = allLines.index("                                       N O D E   O U T P U T\r\n")
    modeVectorStartIndex = blockStartIndex + offset
    print "the first node:", allLines[modeVectorStartIndex],
    modeVectorEndIndex = allLines[modeVectorStartIndex:].index("\r\n")  - 1
    modeVectorEndIndex += modeVectorStartIndex
    print "the last node:", allLines[modeVectorEndIndex],
    
    modeM = allLines[modeVectorStartIndex:modeVectorEndIndex + 1]
    j = 1
    for i in range(len(modeM)):
#         print "j = ", j , "\n"
#         print "i = ", i , "\n"
#         print "modeM[i].split()[0] = ", modeM[i].split()[0] , "\n"
#         print "modeM[i].split()[0] = ", modeM[i].split()[1:] , "\n"
        while (j != int(modeM[i].split()[0])):
            #print "j in while = ", j , "\n"
            mode2D[modeIndex].extend(['0','0','0'])
            j = j + 1
#         print "modeM[i].split()[0] = ", modeM[i].split()[1:] , "\n"
        mode2D[modeIndex].extend(modeM[i].split()[1:])
        j = j + 1
        
    modeIndex += 1
    allLines = allLines[modeVectorEndIndex + 1 :]
    
# print mode2D
mode2D = array(mode2D)
# print mode2D
mode2D = mode2D.transpose()

outLength = len (mode2D)
outWidth = len(mode2D[1,:])


try:
    os.remove(dirOutput + os.sep + modeOutputFileName)
except OSError:
    pass
    
outputFile = file(dirOutput + os.sep + modeOutputFileName,'a')


for i in range(outLength):
    for j in range(outWidth):
         outputFile.write(mode2D[i, j].rjust(15))
    outputFile.write("\n")
        
print "\nThe output 2D mode matrix is:  \n",  mode2D
print "\nThe size of the output shape vector is {} *  {}".format(outLength, outWidth)
print "It contains information of {} mode shapes, and each mode shape has {} nodes, 3 * {} DOFs.".format(numOfModes, outLength/3, outLength/3)
print "The output data of mode shape extraction is stored in: ", dirOutput + os.sep + modeOutputFileName  
text = "Mode Shape Extraction Finished!"
print "\033[1;32m" + text + "\033[1;m" 
