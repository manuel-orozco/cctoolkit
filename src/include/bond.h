#pragma once

#include "atom.h"

class Bond {
    private:
        Atom atom1;
        Atom atom2;
        
    public:
        Bond(Atom atom1, Atom atom2);
        double get_bond_length(Atom atom1, Atom atom2);
};