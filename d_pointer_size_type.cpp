/* 
 * File:   d_pointer_size_type.cpp
 *
 */
#include "d_pointer_size_type.h"
/**
 * asigna un valor inicial de puntero
 */
d_pointer_size_type::d_pointer_size_type(){
    this->espacio=(int*)malloc(dos*sizeof(int));
    this->puntero=(int*)malloc(dos*sizeof(int));
}
//Obtiene el ID 
int d_pointer_size_type::getID()const{
    return ID;
}
//Obtiene el puntero
int* d_pointer_size_type::getPtr()const{
    return puntero;
}
//Obtiene el espacio en memoria que ocupa
int* d_pointer_size_type::getEsp(){
    return espacio;
}
//Obtiene el tipo
char d_pointer_size_type::getTipo(){
    return tipo;
}
//Obtiene la referencia
char d_pointer_size_type::getRef(){
    return referencia;
}
/**
 * Setea el ID 
 * @param pID, valor a setear
 */
void d_pointer_size_type::setID(int pID){
    this->ID=pID;
}
/**
 * Setea el puntero 
 * @param pPtr, valor a setear
 */
void d_pointer_size_type::setPtr(long pPtr){
    int largo=contador(pPtr);
    int i=0;
    if(largo<10){
        *puntero=(int)pPtr;
    }else{
        (*puntero)=(pPtr/pow10(largo-nueve));
        pPtr%=(int)pow10(largo-nueve);
        *(++puntero)=(int)pPtr;
        puntero-;
    }
}
/**
 * Setea el la cantidad de epacio a ocupar 
 * @param pSpace, valor a setear
 */
void d_pointer_size_type::setEsp(long pSpace){
    int largo=contador(pSpace);
    int i=0;
    if(largo<10){
        *espacio=(int)pSpace;
    }else{
        (*espacio)=(pSpace/pow10(largo-nueve));
        pSpace%=(int)pow10(largo-nueve);
        *(++espacio)=(int)pSpace;
        espacio--;
    }
}
/**
 * Setea el tipo
 * @param pType, valor a setear
 */
void d_pointer_size_type::setTipo(char pType){
    this->tipo=pType;
}
/**
 * Setea la referencia
 * @param pRef, valor a setear
 */
void d_pointer_size_type::setRef(char pRef){
    this->referencia= static_cast<unsigned int>(this->referencia)
            + static_cast<unsigned int>(pRef);//Moviliza el puntero
}
/**
 * @param pPointer
 * @return un valor de true o false según corresponda
 */
bool d_pointer_size_type::operator== (const d_pointer_size_type &pPointer){
    return (pPointer.getPtr() == this->getPtr());
}
/**
 * @param pPointer
 */
void d_pointer_size_type::operator= (const d_pointer_size_type &pPointer){
    this->setID(pPointer.getID());
}
