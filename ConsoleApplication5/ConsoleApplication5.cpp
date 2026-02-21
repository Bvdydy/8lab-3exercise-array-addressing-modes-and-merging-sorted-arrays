// exercise3_v3.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;

#define SIZE 10

int main()
{
    setlocale(LC_ALL, "Russian");

    // Вариант 3: Динамический + Индексная
    cout << "\n=== Вариант 3: Динамический + Индексная ===" << endl;
    int* dynamicArray3 = new int[SIZE];

    for (int i = 0; i < SIZE; i++) {
        dynamicArray3[i] = i * i;
    }

    cout << "Заполнение: ";
    for (int i = 0; i < SIZE; i++) {
        cout << dynamicArray3[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray3;

    // Вариант 4: Динамический + Указательная
    cout << "\n=== Вариант 4: Динамический + Указатель ===" << endl;
    int* dynamicArray4 = new int[SIZE];

    for (int* ptr = dynamicArray4, i = 0; i < SIZE; i++, ptr++) {
        *ptr = i * i;
    }

    cout << "Заполнение: ";
    for (int* ptr = dynamicArray4, i = 0; i < SIZE; i++, ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    delete[] dynamicArray4;

    return 0;
}