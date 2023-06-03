//
// Created by German Martirosyan on 03.06.2023.
// 16.	Ввести одномерный массив   из 13 элементов. Определить в нём среднее арифметическое тех элементов, которые при делении на 4 дают остаток 1 или 3.
//

#include <iostream>
#include "../utils/utils.h"

using namespace std;

void lab10() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №10" << endl;

    const int SIZE = 13;
    double summ = 0;
    int counter = 0;

    int *arr = createArray(SIZE);
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 4 == 1 ||  arr[i] % 4 == 3) {
            summ += arr[i];
            counter += 1;
        }
    }

    cout << "-----------------------" << endl;
    cout << "Результат:" << endl;

    if (counter > 0) {
        double result = summ / counter;
        cout << "Cреднее арифметическое: " << summ / counter << endl;
    } else {
        cout << "Подходящих элементов не найдено" << endl;
    }
}