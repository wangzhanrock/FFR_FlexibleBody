syms theta psi PHI t



A = [ cos(theta)*cos(psi)   -cos(theta)*sin(psi)  sin(theta);
      sin(PHI)*sin(theta)*cos(psi)+cos(PHI)*sin(psi)  -sin(PHI)*sin(theta)*sin(psi)+cos(PHI)*cos(psi)     -sin(PHI)*cos(theta);
      -cos(PHI)*sin(theta)*cos(psi)+sin(PHI)*sin(psi)  cos(PHI)*sin(theta)*sin(psi)+sin(PHI)*cos(psi)   cos(PHI)*cos(theta)
    ];

G_bar = [ cos(theta)*cos(psi)     sin(psi)   0;
      -cos(theta)*sin(psi)    cos(psi)   0;
      sin(theta)              0          1
    ];

G= A * G_bar;

G=simple(G),



%latex(G)

