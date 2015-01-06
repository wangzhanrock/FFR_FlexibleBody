#!/usr/bin/python

import os
import shutil
from __main__ import *

dirs = os.listdir(dirInput)
# print dirs
###########################################################################
# lumped mass mij extraction
###########################################################################
# stiffnessInputFileEnding = 'STIF1.mtx'
stiffnessOutputFileName = 'stiffnessMatrix.dat'

for inputFile in dirs:
    if "STIF" in inputFile and ".mtx" in inputFile:
        break; 


srcfile = dirInput + os.sep + inputFile
dstfile = dirOutput + os.sep + stiffnessOutputFileName
shutil.copy(srcfile, dstfile)

print 
print"stiffness data was stored in: ", dstfile
text = "Stiffness Matrix Extraction Finished!"
print "\033[1;32m" + text + "\033[1;m" 
