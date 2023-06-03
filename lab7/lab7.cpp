#include <iostream>
#include "../utils/utils.h"

using namespace std;

void lab7() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №7" << endl;

    const int SIZE = 7;
    string userInput;
    int negativeCount = 0;
    int isDevidedByThree = 0;

    int *arr = createArray(SIZE);
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
        if (arr[i] % 3 == 0) {
            isDevidedByThree++;
        }
    }
    cout << "-----------------------" << endl;
    cout << "Результат:" << endl;
    cout << "Количество отрицательных чисел: " << negativeCount << endl;
    cout << "Количество чисел, делящихся на три без остатка: " << isDevidedByThree << endl;
}
