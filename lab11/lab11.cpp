//
// Created by German Martirosyan on 03.06.2023.
// 16.	Ввести одномерный массив   из   элементов. Элементы массива, чей квадрат меньше 25 увеличить вдвое. Массив вывести до и после преобразования.
//

#include <iostream>
#include <cmath>
#include <string>
#include "../utils/utils.h"

using namespace std;

void lab11() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №11" << endl;

    int size;
    string userInput;
    string beforeModifyArr = "[";
    string afterModifyArr = "[";

    cout << "Введите желаемый размер массива: ";
    cin >> userInput;

    while(!isInt(userInput)) {
        cout << "Неверный тип. Введите целое число: ";
        cin >> userInput;
    }

    size = stoi(userInput);

    int *arr = createArray(size);
    int modifiedArr[size];

    for (int i = 0; i < size; i++) {
        string prefix = (i > 0) ? ", " : "";
        beforeModifyArr += prefix + to_string(arr[i]);
        if(pow(arr[i], 2) < 25) {
            modifiedArr[i] = arr[i] * 2;
        } else {
            modifiedArr[i] = arr[i];
        }
        afterModifyArr += prefix + to_string(modifiedArr[i]);
    }

    beforeModifyArr += "]";
    afterModifyArr += "]";

    cout << "-----------------------" << endl;
    cout << "Результат:" << endl;
    cout << "Массив до преобразования:" << endl;
    cout << beforeModifyArr << endl;
    cout << "Массив после преобразования:" << endl;
    cout << afterModifyArr << endl;
}