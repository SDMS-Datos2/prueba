/**
 * Clase que permite transparencia
 */
#include "dobject.h"
#include <string>
#include <iostream>

dObject::dObject(){
}
/**
 * Retorna el valor del tipo
 * @return dObjectType 
 */
std::string dObject::getDObjectTipo(){
    return dObjectTipo;
}
/**
 * Setea el valor
 * @param pType, valor a setear
 */
void dObject::setDObjectTipo(std::string pType){
    this->dObjectTipo=pType;
}
/**
 * Devuelve el puntero
 * @return 
 */
void* dObject::getDObjectPuntDato(){
    return dObjectPuntDato;
}
/**
 * Setea el puntero
 * @param pPuntData
 */
void dObject::setDObjectPuntDato(void *pPuntData){
    this->dObjectPuntDato= pPuntData;
}
