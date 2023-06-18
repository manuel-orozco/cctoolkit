#include <iostream>
#include "atom.h"
#include "bond.h"

int main() {
    Atom atom1;
    Atom atom2;
    std::cout << "Hello" << std::endl;
    atom1.set_coords(0.644, 0.753, 0.0);
    atom2.set_coords(-0.295, 0.753, 0.0);
    Bond bond1(atom1, atom2);
    std::cout << bond1.get_bond_length(atom1, atom2) << std::endl;
    std::cout << "Hello from main" << std::endl;
    return 0;
}