#ifndef DCHAR_H
#define DCHAR_H

using namespace std;

/**
 * @brief envoltorio para los datos tipo char.
 */

class dChar
{
public:
    dChar(void *pPunterodHeap);
    void* operator=(const char pChar);
private:
    void* punteroHeap;
};

#endif // DCHAR_H
