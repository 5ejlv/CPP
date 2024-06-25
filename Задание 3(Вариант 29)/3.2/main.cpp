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
    char response;
    int gamma = 0;
    while (true)
    {
        cout << "(C = Зашифровать | D = Дешифровать) : \n";
        cin >> response;
        if (response != 'C' && response != 'D')
        {
            cout << "Неверный аргумент \n";
            continue;
        }
        break;
    }
    while (true)
    {
        cout << "Введите гамму(127-255): \n";
        cin >> gamma;
        if (gamma < 127 || gamma > 255)
        {
            cout << "Неверная гамма \n";
            continue;
        }
        break;
    }
    char* text = new char[4096];
    cout << "Введите текст: \n";
    cin.ignore();
    cin.getline(text, 4096);

    switch (response)
    {
    case 'C':
        gammaCrypt(text, gamma);
        cout << "Зашифрованный текст: " << text << '\n';
        break;
    case 'D':
        gammaCrypt(text, gamma);
        cout << "Дешифрованный текст: " << text << '\n';
        break;
    }
    system("PAUSE");
}
