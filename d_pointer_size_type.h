#ifndef D_POINTER_SIZE_TYPE_H
#define D_POINTER_SIZE_TYPE_H
#include "dobject.h"
#include <cstdlib>


class d_pointer_size_type
{
private:
    unsigned int ID;
    unsigned int puntero;
    unsigned int espacio;
    unsigned char tipo;
    unsigned char referencia;
public:
    d_pointer_size_type();
    int getID()const;
    int getPtr()const;
    int getEsp();
    char getTipo();
    char getRef();
    void setID(int pID);
    void setPtr(int pPtr);
    void setEsp(int pSpace);
    void setTipo(char pType);
    void setRef(char pRef);
    bool operator== (const d_pointer_size_type &pPointer);
    void operator= (const d_pointer_size_type &pPointer);
    void operator= (const dObject &pDObject);
    void operator= (const int pInt);

};

#endif 

#endif // D_
