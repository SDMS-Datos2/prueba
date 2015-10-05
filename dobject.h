#ifndef DOBJECT_H
#define DOBJECT_H

#include <iostream>
#include <string>

class dObject {
private:
    std::string dObjectType;
    void* dObjectPuntData;
public:
    dObject();
    std::string getDObjectTipo();
    void setDObjectTipo(std::string pType);
    void* getDObjectPuntDato();
    void setDObjectPuntDato(void *pPuntData);   
};
#endif // DOBJECT_H
