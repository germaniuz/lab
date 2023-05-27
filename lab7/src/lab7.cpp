#include <iostream>

using namespace std;

void lab7() {
    const int SIZE = 7;
    int arr[SIZE];
    int negativeCount = 0;
    int isDevidedByThree = 0;

    for (int i = 0; i < SIZE; i++) {
        cout << "Введите " << i + 1 << "ое число: ";
        cin >> arr[i];

        if (arr[i] < 0) {
            negativeCount++;
        }
        if (arr[i] % 3 == 0) {
            isDevidedByThree++;
        }
    }

    cout << "Количество отрицательных чисел: " << negativeCount << endl;
    cout << "Количество чисел, делящихся на три без остатка: " << isDevidedByThree << endl;
}
