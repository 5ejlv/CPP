#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "ex4.h"
using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Office* of = new Office(12, 12, 3, 4, 10, 3);
    cout << "getWallsArea(): " << of->getWallsArea() << '\n';
    cout << "getWallsAreaExcludeDoorAndWindows(): " << of->getWallsAreaExcludeDoorAndWindows() << '\n';
    cout << "paintPerRoomExcludeWindows(): " << of->paintPerRoomExcludeWindows() << '\n';
    cout << *of;
    system("PAUSE");
}
