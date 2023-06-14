#include <iostream>
#include <cmath>

class Atom {
    private:
        double xcoord = 0.0;
        double ycoord = 0.0;
        double zcoord = 0.0;

    public:
        void set_coords (double x, double y, double z) {
            xcoord = x;
            ycoord = y;
            zcoord = z;
        }

        double get_xcoord () {
            return xcoord;
        }

        double get_ycoord () {
            return ycoord;
        }

        double get_zcoord () {
            return zcoord;
        }
};


double get_bond_length(Atom atom1, Atom atom2) {
    double x1 = atom1.get_xcoord();
    double y1 = atom1.get_ycoord();
    double z1 = atom1.get_zcoord();

    double x2 = atom2.get_xcoord();
    double y2 = atom2.get_ycoord();
    double z2 = atom2.get_zcoord();

    double bond_length = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    return bond_length;
} 

int main() {
    Atom atom1;
    Atom atom2;
    std::cout << "Hello" << std::endl;
    atom1.set_coords(0.644, 0.753, 0.0);
    atom2.set_coords(-0.295, 0.753, 0.0);

    std::cout << get_bond_length(atom1, atom2) << std::endl;
    return 0;
}