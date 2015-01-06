#!/usr/bin/python

import os



<<<<<<< .mine
dirInput = '/home/zhan/workspaceCproject/FFR_FlexibleBody/abaqus_example/benuliBeam'
dirOutput = '../../FEM_data/original/benulibeam'
numOfNodes = 100
numOfModes = 10   # give the number of modes you want to extract from the input file, 
=======
dirInput = '/home/zwang/MBSim/Students/FFR_FlexibleBody/abaqus_example/rod/rod_mmUnit_lessStiffness/'
dirOutput = '../../FEM_data/original/rod_mmUnit_lessStiffness/'
numOfNodes = 760
numOfModes = 30   # give the number of modes you want to extract from the input file, 
>>>>>>> .r7174
                 # it should be less then the number of modes stored in the .dat file
dirs = os.listdir(dirInput)
print "Files in the input folder: ", dirs

if not os.path.exists(dirOutput):
    os.makedirs(dirOutput)
###########################################################################
# lumped mass mij extraction
###########################################################################
import mij_extraction


# ###########################################################################
# # Mode vectors extraction
# ###########################################################################
import mode_extraction
# 
# ###########################################################################
# # u0 extraction
# ###########################################################################
# 
import u0_extraction
   
# ###########################################################################
# copy the Stiffness matrix into the target folder
###########################################################################
import stiffness_extraction

