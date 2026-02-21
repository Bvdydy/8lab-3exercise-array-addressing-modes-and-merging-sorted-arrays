// exercise3_v2.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "\n=== Вариант 2: Статический + Указатель ===" << endl;

    // Статический массив
    int staticArray2[SIZE];

    // Заполнение с указательной адресацией
    for (int* ptr = staticArray2, i = 0; i < SIZE; i++, ptr++) {
        *ptr = i * i;
    }

    // Вывод с указательной адресацией
    cout << "Заполнение: ";
    for (int* ptr = staticArray2, i = 0; i < SIZE; i++, ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    return 0;
}