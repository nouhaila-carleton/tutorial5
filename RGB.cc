#include "RGB.h"


RGB::RGB(int r, int g, int b) {
    //set the colours AFTER ranges are checked
    this->r = 0 <= r <= 255 ? r : 0;
    this->g = 0 <= g <= 255 ? g : 0;
    this->b = 0 <= b <= 255 ? b : 0;
}

RGB::RGB(CuColour colour) {
    this->setColour(colour);
}

RGB::RGB() {
    this->r = 0;
    this->g = 0;
    this->b = 0;
}

CuColour RGB::getColour() const{
    CuColour colour = 0x000000;
    colour = colour | (((this->r)<<16) & 0xFF0000);
    colour = colour | (((this->g)<<8) & 0xFF00);
    colour = colour | ((this->b) & 0xFF);

    return colour;
}

void RGB::setColour(CuColour colour) {
    //set the colours AFTER ranges are checked
    this->r= 0<=((colour >> 16) & 0xFF)<=255 ? ((colour >> 16) & 0xFF) : 0;
    this->g= 0<=((colour >> 8) & 0xFF)<=255 ? ((colour >> 8) & 0xFF) : 0;
    this->b = 0<=(colour & 0xFF)<=255 ? (colour & 0xFF) : 0;
}

int RGB::getR() const {
    return this->r;
}

int RGB::getG() const {
    return this->g;
}

int RGB::getB() const {
    return this->b;
}

void RGB::print() const {
    std::cout<<"RGB COLOURS: \n Red: " << this->r<< ",\n Green: " << this->g << ",\n Blue: " << this->b << "\n";
}

RGB RGB::WHITE()  {
    return RGB(255, 255, 255);
}

RGB RGB::BLACK()  {
    return RGB(0, 0, 0);
}

RGB RGB::RED()  {
    return RGB(255, 0, 0);
}

RGB RGB::GREEN()  {
    return RGB(0, 255, 0);
}

RGB RGB::BLUE()  {
    return RGB(0, 0, 255);
}