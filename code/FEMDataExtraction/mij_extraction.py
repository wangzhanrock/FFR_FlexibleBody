#!/usr/bin/python

import os
from __main__ import *

dirs = os.listdir(dirInput)
# print dirs
###########################################################################
# lumped mass mij extraction
###########################################################################
#massInputFileEnding = 'MASS1.mtx'
massOutputFileName = 'mij.dat'

for inputFile in dirs:
    if "MASS" in inputFile and ".mtx" in inputFile:
        massFile = open(dirInput + os.sep + inputFile, 'r')
        break; 

allLines = massFile.readlines()

mij = []

for index in range(len(allLines) / 3):
    entries = allLines[index * 3].split(',')
    #mij.append(float(entries[-1][:-2]))
    mij.append(entries[-1][:-2])

massFile.close()

# output mij to the output folder 
try:
    os.remove(dirOutput + os.sep + massOutputFileName)
except OSError:
    pass
    
mijOutput = file(dirOutput + os.sep + massOutputFileName,'a')

for index in range(len(mij)):
    mijOutput.write(str(mij[index]) + '\n')
mijOutput.close()

print 
print len(mij), "mij data was stored in: ", dirOutput + os.sep + massOutputFileName
text = "mij Extraction Finished!"
print "\033[1;32m" + text + "\033[1;m" 
 
