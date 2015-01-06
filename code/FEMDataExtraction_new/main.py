#!/usr/bin/python

import extract4MBSim

inputDir = '/usr/users/laplace/zwang/backup/shortBeam_eigenData/C3D4_refined/'

mbsimExtractor = extract4MBSim.extract4MBSim(inputDir)

mbsimExtractor.extractmij()
mbsimExtractor.extractStiffness()
mbsimExtractor.extractu0()
mbsimExtractor.extractModes()

'''
Create Surface File with nodelist
'''
#mbsimExtractor.neutralPhase()

mbsimExtractor.extractRingNodes()
