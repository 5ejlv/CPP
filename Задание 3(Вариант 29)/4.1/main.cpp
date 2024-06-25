#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "ex3.h"
using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char* text = new char[4096];
    cout << "Введите текст: \n";
    cin.getline(text, 4096);
    filterText(text);
    cout << "Новый текст : " << text << '\n';
    system("PAUSE");
}
