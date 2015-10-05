/* 
 * File:   dheap.cpp
 */
#include "dheap.h"
dHeap* dHeap::pInstancia = 0;

/**
 * @brief dHeap::operator = Sobrecarga del operador de
 * igualdad que evita alguna copia del dHeap.
 * @param heap es el objeto dHeap que se desea sobreescribir.
 * @return un objeto del tipo dHeap.
 */
dHeap* dHeap::operator =(const dHeap* heap){
    return pInstancia;
}
/**
 * @brief dHeap::~dHeap Destructor por defecto
 * de nuestra clase.
 */
dHeap::dHeap(char* pPath) {

}


/**
 * @brief dHeap::instancia Metodo que limita el numero
 * de instancias de esta clase a solo una.
 * @param path es la ruta del archivo de configuracion.
 * @return un objeto dHeap.
 */
dHeap* dHeap::instancia(char* path)
{
    if (pInstancia == 0)
        pInstancia = new dHeap(path);
    return pInstancia;
}

/**
 * @brief dHeap::instancia metodo sobrecargado que
 * retorna la instancia unica del dHeap
 * @return un puntero del dHeap
 */
dHeap* dHeap::instancia()
{
    return pInstancia;
}


d_pointer_size_type* dHeap::dMalloc(int pSize, string pType)
{
    
}

void dHeap::dfree(d_pointer_size_type* pPuntero)
{

}

void dHeap::dnew(d_pointer_size_type* pPuntero, int pDato)
{

}
