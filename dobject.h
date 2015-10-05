#ifndef DOBJECT_H
#define DOBJECT_H

#include <iostream>
#include <string>
/**
 * Permite la transparencia en el dHeap
 */
class dObject {
private:
    std::string dObjectTipo;
    void* dObjectPuntDato;
public:
    dObject();
    std::string getDObjectTipo();
    void setDObjectTipo(std::string pTypo);
    void* getDObjectPuntDato();
    void setDObjectPuntDato(void *pPuntDato);   
};
#endif // DOBJECT_H

