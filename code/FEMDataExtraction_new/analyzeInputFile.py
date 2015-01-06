import os
import numpy as np

def getInputFile(inputDirectory):
    for filename in os.listdir(inputDirectory):
         if filename.endswith('.inp'):
             return os.path.join(inputDirectory, filename)
         
def getOutputFile(inputDirectory):
    for filename in os.listdir(inputDirectory):
         if filename.endswith('.dat'):
             return os.path.join(inputDirectory, filename)

def readNodes(inputDirectory):
    '''
    reads all Nodes in the input file
    '''
    f = open(getInputFile(inputDirectory))
    allLines = f.readlines()
    f.close()
    
    nodes = {}
    readNodes = False
    readrelVec = False
    relVec = np.array([0.,0.,0.])
    for line in allLines:
        if readNodes:
            try:
                split = line.split(',')
                nodenumber = int(split[0])
                if (len(split) == 3):
                    node = np.array([float(split[1]), float(split[2]), 0])
                else:
                    node = np.array([float(split[1]), float(split[2]), float(split[3])])
                nodes[nodenumber] = node
            except:
                readNodes = False
                
        if line.startswith('*Node'):
            readNodes = True
            
        if readrelVec:
            try:              
                split = line.split(',')
                relVec = np.array([float(split[0]), float(split[1]), float(split[2])])
            except:
                readrelVec = False
                
        if line.startswith('*Instance'):
            readrelVec = True

    newnodes = {}

    for node in nodes:
      newnodes[node] = nodes[node] + relVec
    
    return newnodes

def readSurfaceNodes(inputDirectory, surfaceName):
    '''
    Reads all node numbers of a specific node-set in the file
    '''
    f = open(getInputFile(inputDirectory))
    allLines = f.readlines()
    f.close()
    
    surfaceNodes = []
    readSurface = False
    for line in allLines:
        if readSurface:
            try:
                split = line.split(',')
                for ele in split:
                    node = int(ele)
                    surfaceNodes.append(node)
            except:
                return surfaceNodes
                pass
        if line.startswith('*Nset, nset=' + surfaceName):
            readSurface = True
            
    return surfaceNodes
