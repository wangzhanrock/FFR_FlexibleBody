FFR
===
## This repository contains all the code of my master thesis "A Framework of Simulating Deformable Bodies with Complex Geometries in a Multibody System with Sliding Contacts"

## In this thesis, I 
  * Modeled the dynamics of flexible bodies using the floating frame of reference (FFR) method; 
  * Derived a continuous contour description using the non-uniform rational basis spline (NURBS) interpolation and     contact search algorithm, which together enable sliding contacts.

## I implemented these in the open-sourced multibody simulation framework MBSim and validated them by comparing simulation results with those of ABAQUS, which showed a good agreement. Most of the implementation can also be found in the project website of MBSim: https://code.google.com/p/mbsim-env/

## The implementation contains the following parts:
  * the pre-processor: transform the data collected from ABAQUS modal analysis into the desired input formats.
  * the dynamics of the FFR method:
  * the C^2 continuous contour description

