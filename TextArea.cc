#include "TextArea.h"

TextArea::TextArea(int x, int y, int width, int height, const std::string& id, const std::string& label, RGB fill, RGB border){
    Rectangle rect;
    rect.x=x;
    rect.y=y;
    rect.width=width;
    rect.height=height;
    this->dimensions = rect;

    this->text = label;
    this->id = id;
    this->fill = fill;
    this->border = border;

}

TextArea::TextArea(const Rectangle& rect, const std::string& id, const std::string& label, RGB fill, RGB border){
    this->dimensions = rect;
    this->text = label;
    this->id = id;
    this->fill = fill;
    this->border = border;

    std::cout<<"\nCreated new TextArea. ID: "<< this->id <<std::endl;//debug
}

TextArea::TextArea() {
    Rectangle rect;
    rect.x=0;
    rect.y=0;
    rect.width=10;
    rect.height=10;
    this->dimensions = rect;

    this->text = "NO LABEL";
    this->id = "NO ID";
    this->fill = RGB::WHITE();
    this->border = RGB::BLACK();
}


void TextArea::setFill(const RGB& fill) {
    this->fill = fill;
}
void TextArea::setBorder(const RGB& border) {
    this->border = border;
}

//DO NOT INCLUDE IN ASSIGNMENT
TextArea::TextArea(const TextArea& obj) {

    this->text = "DUPLICATE";
    this->id = obj.id;//debug//is the id also duplicate text
    this->fill = obj.fill;
    this->border = obj.border;
    this->dimensions = obj.dimensions;
}

bool TextArea::overlaps(const TextArea& ta) const {
    const Rectangle area = ta.dimensions;
    return dimensions.overlaps(area);
}

void TextArea::print() const {
    std::cout
    <<"Object address: "<<this<<"\n"
    <<std::setw(20)<<"TextArea id: "<<this->id<<"\n"
    <<std::setw(20)<<"Preferred location: "<<this->dimensions.x<<", "<<this->dimensions.y<<"\n"
    <<std::setw(20)<<"Size: "<<this->dimensions.width<<", "<<this->dimensions.height<<"\n"
    <<std::setw(20)<<"Text: "<<this->text<<"\n"
    <<std::endl;
}

std::string TextArea::getId() const {
    return this->id;
}