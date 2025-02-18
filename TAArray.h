#ifndef TAARRAY_H
#define TAARRAY_H

#include <iostream>
#include <string>
#include "defs.h"
#include "TextArea.h"


class TAArray {
    TextArea** areaPntrs;
    int numAreas;

    public: 
        TAArray();
        ~TAArray();

        //TextArea** getPointerArray() const;

        int getSize() const;
        TextArea* get(const std::string& id) const;//NEVER MENTIONED IN DOCUMENTATION
        TextArea* get(int index) const;//NEVER MENTIONED IN DOCUMENTATION
        
        bool add(TextArea* area);
        bool add(TextArea* area, int index);

        TextArea* remove(int index);//NEVER MENTIONED IN DOCUMENTATION
        TextArea* remove(const std::string& id);//NEVER MENTIONED IN DOCUMENTATION

};

#endif