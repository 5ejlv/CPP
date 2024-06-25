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
    Room* room = new Room(12, 12, 3);
    Room* room_1 = new Room(12, 12, 3);
    cout << "getWallsArea(): " << room->getWallsArea() << '\n';
    cout << "getWallsAreaExcludeDoorAndWindows(): " << room->getWallsAreaExcludeDoorAndWindows() << '\n';
    cout << *room;
    cout << (*room == *room_1) << '\n';
    delete room;
    delete room_1;
    system("PAUSE");
}
