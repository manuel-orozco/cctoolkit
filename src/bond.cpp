#include "../include/bond.h"
#include <cmath>

Bond::Bond(Atom a1, Atom a2) {
    atom1 = a1;
    atom2 = a2;
}

double Bond::get_bond_length(Atom atom1, Atom atom2) {
    double x1 = atom1.get_xcoord();
    double y1 = atom1.get_ycoord();
    double z1 = atom1.get_zcoord();

    double x2 = atom2.get_xcoord();
    double y2 = atom2.get_ycoord();
    double z2 = atom2.get_zcoord();

    double bond_length = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    return bond_length;
} 