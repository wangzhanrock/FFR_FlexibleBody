#!/usr/bin/python

import os
import numpy as np
from numpy  import *

from __main__ import *
# dirInput = '../../abaqus_example/rod'
# dirOutput = '../../FEM_data/original/rod'

dirs = os.listdir(dirInput)
# print "Files in the input folder: ", dirs

###########################################################################
# Mode vectors extraction
###########################################################################
InputFileEnding = '.inp'
OutputFileName = 'u0.dat'

 
for inputFile in dirs:
    if inputFile.endswith(InputFileEnding):
        File = open(dirInput + os.sep + inputFile, 'r')
        break; 
    
print "\nThe input file for u0 extraction is ", dirInput + os.sep + inputFile  

allLines = File.readlines()        
data2D = [ [] for i in range(numOfNodes)]

i = 0
for line in allLines:
    if line.startswith("*Node\r\n"):
        targetStartIndex = i + 1
    if line.startswith("*Element, type="):
        targetEndIndex = i
    i+=1  

# print targetStartIndex, targetEndIndex
# print allLines[0]
# print allLines[targetStartIndex]
# print allLines[targetEndIndex]

target = allLines[targetStartIndex:targetEndIndex]

i = 0
for line in target:
    data2D[i] = line.split(',')[1:]
    i= i+1

#print data2D
data2D = array(data2D)
#print data2D

outLength = len (data2D)
outWidth = len(data2D[1,:])

try:
    os.remove(dirOutput + os.sep + OutputFileName)
except OSError:
    pass
    
outputFile = file(dirOutput + os.sep + OutputFileName,'a')


for i in range(outLength):
    for j in range(outWidth):
         outputFile.write(data2D[i, j].rjust(17))

print "\nThe output 2D u0 matrix is:  \n",  data2D
print "\nThe size of the u0 matrix is {} *  {}".format(outLength, outWidth)
print "\nThe number of nodes(nj) in the modal is {}".format(outLength)
print "The output data of u0 extraction is stored in: ", dirOutput + os.sep + OutputFileName  
text = "u0 Extraction Finished!"
print "\033[1;32m" + text + "\033[1;m" 


