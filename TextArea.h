#ifndef TEXTAREA_H
#define TEXTAREA_H


#include <iostream>
#include <string>
#include <iomanip>

#include "defs.h"
#include "RGB.h"

class TextArea{
    int x, y, width, height;
    Rectangle dimensions;
    std::string text, id;
    RGB fill, border;

    public: 
        TextArea(int x, int y, int width, int height, const std::string& id, const std::string& label, RGB fill = RGB::WHITE(), RGB border = RGB::BLACK());
        TextArea(const Rectangle& rect, const std::string& id, const std::string& label, RGB fill = RGB::WHITE(), RGB border = RGB::BLACK());
        TextArea();

        void setFill(const RGB& rgb);
        void setBorder(const RGB& rgb);


        TextArea(const TextArea& obj);
        bool overlaps(const TextArea& ta) const;
        //void draw(Display *display, Window win, GC gc, int x, int y);
        void print() const;
        std::string getId() const; 
};

#endif