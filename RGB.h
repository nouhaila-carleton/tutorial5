#ifndef RGB_H
#define RGB_H

#include <iostream>
#include <string>
#include "defs.h"

class RGB {
    int r, g, b;

    public: 
        RGB(int r, int g, int b);
        RGB(CuColour colour);
        RGB();

        CuColour getColour() const;
        void setColour(CuColour colour);

        int getR() const;
        int getG() const;
        int getB() const;

        void print() const;
        

        static RGB WHITE() ;
        static RGB BLACK() ;
        static RGB RED() ;
        static RGB GREEN() ;
        static RGB BLUE() ;

};

#endif
