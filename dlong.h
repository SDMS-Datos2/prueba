#ifndef DLONG_H
#define DLONG_H

using namespace std;

/**
 * @brief envoltorio
 * para los datos tipo long.
 */
class dLong
{
public:
    dLong(void *pPunterodHeap);
    void* operator=(const long pLong);
private:
    void* punteroHeap;
};

#endif // DLONG_H
