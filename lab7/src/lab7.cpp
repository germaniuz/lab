#include <iostream>
#include "../../utils/include/utils.h"
using namespace std;

void lab7() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №7" << endl;

    const int SIZE = 7;
    string userInput;
    int arr[SIZE];
    int negativeCount = 0;
    int isDevidedByThree = 0;
    bool validNumber;

    for (int i = 0; i < SIZE; i++) {
        cout << "Введите " << i + 1 << "ое число: ";
        cin >> userInput;
        validNumber = isInt(userInput);
        while(!validNumber) {
            cout << "Неверный формат. Введите число: ";
            cin >> userInput;
            validNumber = isInt(userInput);
        }
        arr[i] = stoi(userInput);

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
