#include "stdafx.h"
#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "\n=== Вариант 1: Статический + Индексная ===" << endl;

    // Статический массив
    int staticArray1[SIZE];

    // Заполнение с индексной адресацией
    for (int i = 0; i < SIZE; i++) {
        staticArray1[i] = i * i;
    }

    // Вывод с индексной адресацией
    cout << "Заполнение: ";
    for (int i = 0; i < SIZE; i++) {
        cout << staticArray1[i] << " ";
    }
    cout << endl;

    return 0;
}