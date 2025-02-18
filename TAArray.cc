#include "TAArray.h"

TAArray::TAArray(){
    this->areaPntrs = new TextArea*[MAX_COMPONENTS];
    this->numAreas = 0;
}
TAArray::~TAArray(){
    for (int i = 0; i < numAreas; i++) {
        delete areaPntrs[i];
    }
    delete[] areaPntrs;

}

int TAArray::getSize() const {
    return numAreas;
}


TextArea* TAArray::get(const std::string& id) const{
    for(int i = 0; i < numAreas; i++) {
        if (areaPntrs[i]->getId() == id) {
            return areaPntrs[i];
        }
    } 
    return nullptr;
}


TextArea* TAArray::get(int index) const{
    return areaPntrs[index];
}

bool TAArray::add(TextArea* area){
    return add(area, numAreas);
}

bool TAArray::add(TextArea* area, int index){
    if (index >= 0 && index <= numAreas && numAreas<MAX_COMPONENTS) {
        for(int i = numAreas; i > index; i--) {
            areaPntrs[i]=areaPntrs[i-1];
        }

        areaPntrs[index] = area;
        numAreas++;
        return true;
    }
    
    return false;
}

TextArea* TAArray::remove(int index) {

    if (index >= 0 && index < numAreas) {
        TextArea* area = areaPntrs[index];


        for(int i = index+1; i < numAreas; i++) {
            areaPntrs[i-1] = areaPntrs[i];
        }

        numAreas--;
        areaPntrs[numAreas]=nullptr;

        return area; 
    }
    return nullptr;
}

TextArea* TAArray::remove(const std::string& id) {
    for (int i  = 0; i < numAreas; i++) {
        if (areaPntrs[i]->getId()  == id) {
            return remove(i);
        }
    }
    return nullptr;
}
