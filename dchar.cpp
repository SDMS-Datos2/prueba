/* 
 * File:   dchar.cpp
 *
 */
#include "dchar.h"
#include "d_pointer_size_type.h"
#include "dheap.h"
/**
 * Constructor de la clase
 * @param pPunterodHeap
 */
dChar::dChar(void* pPunterodHeap)
{
    punteroHeap = pPunterodHeap;
}

/**
 * @brief dChar::operator = operador de asignacion que
 * guarda el dato remotamente y lo borra de la memoria local.
 * @param pChar dato tipo char
 * @return un puntero tipo void.
 */
void* dChar::operator =(const char pChar){
    int _dato = pChar;
    d_pointer_size_type* _puntero;
    _puntero= ((dHeap*)punteroHeap)->dMalloc(_dato, "String");
    ((dHeap*)punteroHeap)->dnew(_puntero,_dato);

}

