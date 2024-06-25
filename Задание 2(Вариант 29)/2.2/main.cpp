#include <iostream>
#include <Windows.h>
#include <locale>

#include "ex2.h"

using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int N;
    int M;
    wstring line;

    wcout << "Введите N (Кол-во строк): \n";
    wcin >> N;
    wcout << "Введите M (Кол-во столбцов): \n";
    wcin >> M;

    int** array = new int* [N];
    for (int i = 0; i < N; ++i) {
        array[i] = new int[M] {0};
    }

    for (int i = 0; i < N; i++)
    {
        wcout << "Введите " << i + 1 << " строку без пробелов \n";
        wcin >> line;
        if (line.length() != M)
        {
            wcout << "Неверное кол-во аргументов \n";
            i--;
            line.clear();
            Sleep(300);
            continue;
        }

        for (int it = 0; it < M; it++)
        {
            array[i][it] = line[it] - '0';
        }
    }

    wcout << "Кол-во столбцов, похожих на последнюю: " << getSimilarRowsCount(array, N, M) << "\n";
    system("PAUSE");
}
