#include "ex1.h"

using namespace std;
int bSub(int* bNumPos, int* bNumNeg, int posSize, int negSize)
{
    int dNumPos = 0;
    int dNumNeg = 0;

    for (int i = 0; i < posSize; i++)
    {
        dNumPos += bNumPos[i] * pow(2, i);
    }

    for (int i = 0; i < negSize; i++)
    {
        dNumNeg += bNumNeg[i] * pow(2, i);
    }

    int dRes = dNumPos - dNumNeg;

    return dRes;
}