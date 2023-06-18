#include <cmath>
#include "atom.h"


void Atom::set_coords (double x, double y, double z) {
    xcoord = x;
    ycoord = y;
    zcoord = z;
}

double Atom::get_xcoord () {
    return xcoord;
}

double Atom::get_ycoord () {
    return ycoord;
}

double Atom::get_zcoord () {
    return zcoord;
}




