#ifndef DHEAP_H
#define DHEAP_H

#include <string>
#include <string.h>
#include "d_pointer_size_type.h"
#include "darray.h"
#include "dchar.h"
#include "dfloat.h"
#include "dint.h"
#include "dlong.h"

using namespace std;

/**
 * @brief posee los datos realtivos a la localizacion de la informacion.
 */

class dHeap{

public:
    static dHeap* instancia(char* path);
    static dHeap* instancia();
    d_pointer_size_type* dMalloc(int pSize, string pType);
    void dfree(d_pointer_size_type* pPuntero);
    void dnew(d_pointer_size_type* pPuntero,int pDato); 


    template<typename T>
    /**
     * @brief dAddNewPetition agrega un dato primitivo
     * a la memoria compartida para luego ser borrado de la
     * memoria local
     * @param pDato cualquier tipo de dato primitivo.
     */
    void dAddNewPetition(T pDato){
        if(sizeof(pDato)==sizeof(int)){
            dInt* x(this);
            x = pDato;
        }
        if(sizeof(pDato)==sizeof(long)){
            dLong* x(this);
            x = pDato;
        }
        if(sizeof(pDato)==sizeof(float)){
            dFloat* x(this);
            x = pDato;
        }
        if(sizeof(pDato)==sizeof(char)){
            dChar* x(this);
            x = pDato;
        }
        else{
            dChar* x(this);
    ////////Falta el cuerpo de la sobrecarga
        }
    }


    void dDeletePetition(d_pointer_size_type* toFree){
//        metadatos = toFree;
    }


private:
    char* path;
    static dHeap* pInstancia;         

    //Declaracion de los metodos privados
    dHeap(char* pPath);
    ~dHeap();

    //sobrecarga del operador de igualdad
    dHeap* operator=(const dHeap* heap);
};
#endif // DHEAP_H
