#ifndef DFLOAT_H
#define DFLOAT_H

using namespace std;

/**
 * @brief envoltorio para los datos tipo float.
 */
class dFloat
{
public:
    dFloat(void *pPunterodHeap);
    void* operator=(const float pFloat);
private:
    void* punteroHeap;
};

#endif // DFLOAT_H
