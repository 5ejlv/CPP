#include <iostream>
#include <algorithm>
#include "ex1.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int bNumPosSize, bNumNegSize = 0;
    long long bNumNegLL;
    long long bNumPosLL;
    cout << "Введите размер числа(Положительного): \n";
    cin >> bNumPosSize;
    cout << "Введите число(Положительное) в двоичной системе: \n";
    cin >> bNumPosLL;
    cout << "Введите размер числа(Отрицательного): \n";
    cin >> bNumNegSize;
    cout << "Введите число(Отрицательное) в двоичной системе: \n";
    cin >> bNumNegLL;

    int* bNumPos = new int[bNumPosSize];
    int* bNumNeg = new int[bNumNegSize];
    for (int i = 0; i < bNumPosSize; i++)
    {
        bNumPos[i] = bNumPosLL % 10;
        bNumPosLL /= 10;
    }
    for (int i = 0; i < bNumNegSize; i++)
    {
        bNumNeg[i] = bNumNegLL % 10;
        bNumNegLL /= 10;
    }
    cout << "Сумма этих чисел: " << bSub(bNumPos, bNumNeg, bNumPosSize, bNumNegSize) << "(В десятичной системе)\n";
    system("PAUSE");
}
