/* 
 * File:   d_pointer_size_type.cpp
 *
 */
#include "d_pointer_size_type.h"
/**
 * asigna un valor inicial de puntero
 */
d_pointer_size_type::d_pointer_size_type(){
    this->puntero=7;
}
//Obtiene el ID 
int d_pointer_size_type::getID()const{
    return ID;
}
//Obtiene el puntero
int d_pointer_size_type::getPtr()const{
    return puntero;
}
//Obtiene el espacio en memoria que ocupa
int d_pointer_size_type::getEsp(){
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
void d_pointer_size_type::setPtr(int pPtr){
    this->puntero=pPtr;
}
/**
 * Setea el la cantidad de epacio a ocupar 
 * @param pSpace, valor a setear
 */
void d_pointer_size_type::setEsp(int pSpace){
    this->espacio=pSpace;
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
