#pragma once

class Atom {
    private:
        double xcoord = 0.0;
        double ycoord = 0.0;
        double zcoord = 0.0;

    public:
        void set_coords(double x, double y, double z);

        double get_xcoord(); 

        double get_ycoord(); 

        double get_zcoord(); 
};