#pragma once

#include "atom.h"

class Bond {
    public:
        Bond(Atom atom1, Atom atom2);
        double get_bond_length(Atom atom1, Atom atom2);
};