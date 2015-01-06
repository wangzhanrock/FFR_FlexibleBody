function M = tilde(V)
    M = [ 0     -V(3)   V(2);
          V(3)  0       -V(1);
         -V(2)  V(1)    0
    ];
end