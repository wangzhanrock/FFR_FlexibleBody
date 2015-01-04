FFR
===
This repository contains all the code of my master thesis "A Framework of Simulating Deformable Bodies with Complex Geometries in a Multibody System with Sliding Contacts"

In this thesis, I 
  1. Modeled the dynamics of flexible bodies using the floating frame of reference (FFR) method; 
  2. Derived a continuous contour description using the non-uniform rational basis spline (NURBS) interpolation and     contact search algorithm, which together enable sliding contacts.

I implemented these in the open-sourced multibody simulation framework MBSim and validated them by comparing simulation results with those of ABAQUS, which showed a good agreement. Most of the implementation can also be found in the project website of MBSim: https://code.google.com/p/mbsim-env/

The implementation contains the following parts:
  1. the pre-processor: transform the data collected from ABAQUS modal analysis into the desired input formats.
  2. the dynamics of the FFR method: flexible_body_linear_external.cc, finite_element_linear_external_lumped_node.cc
  3. the C^2 continuous contour description: contours folder
  4. some test examples
