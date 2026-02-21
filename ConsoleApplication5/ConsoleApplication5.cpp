#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int size1 = 7;
    int size2 = 6;

    int* arr1 = new int[size1] {1, 5, 8, 12, 15, 20, 25};
    int* arr2 = new int[size2] {3, 7, 9, 14, 18, 22};

    int size3 = size1 + size2;
    int* mergedArray = new int[size3];

    cout << "=== Объединение упорядоченных массивов ===" << endl;
    cout << "Массив 1: ";
    for (int i = 0; i < size1; i++) cout << arr1[i] << " ";
    cout << endl;

    cout << "Массив 2: ";
    for (int* p = arr2, i = 0; i < size2; i++, p++) cout << *p << " ";
    cout << endl;

    // Слияние с индексной адресацией
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArray[k++] = arr1[i++];
        }
        else {
            mergedArray[k++] = arr2[j++];
        }
    }

    while (i < size1) mergedArray[k++] = arr1[i++];

    // Копирование остатка с указательной адресацией
    int* ptr2 = arr2 + j;
    while (j < size2) {
        mergedArray[k++] = *ptr2;
        ptr2++;
        j++;
    }

    // Вывод с индексной адресацией
    cout << "\nОбъединённый (индекс): ";
    for (int idx = 0; idx < size3; idx++) {
        cout << mergedArray[idx] << " ";
    }
    cout << endl;

    // Вывод с указательной адресацией
    cout << "Объединённый (указатель): ";
    for (int* ptr = mergedArray, idx = 0; idx < size3; idx++, ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;

    return 0;
}