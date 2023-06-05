//
// Created by German Martirosyan on 03.06.2023.
//

#include <iostream>
#include <string>
#include "../utils/utils.h"

using namespace std;

void lab13() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №13" << endl;

    int firstDimension;
    int secondDimension;
    string beforeModifyArr = "[";
    string afterModifyArr = "[";
    string prefix;
    string userInput;

    cout << "Введите количество подмассивов: ";
    cin >> userInput;
    while (!isInt(userInput)) {
        cout << "Неверный тип. Введите возраст: ";
        cin >> userInput;
    }
    firstDimension = stoi(userInput);

    cout << "Введите размер подмассивов: ";
    cin >> userInput;
    while (!isInt(userInput)) {
        cout << "Неверный тип. Введите возраст: ";
        cin >> userInput;
    }
    secondDimension = stoi(userInput);

    int **sourceArray = new int *[firstDimension];
    int modifieadArray[firstDimension][secondDimension];
    int result = 0;

    for (int i = 0; i < firstDimension; i++) {
        cout << "Введите " << i + 1 << " подмассив" << endl;
        sourceArray[i] = createArray(secondDimension);
    }

    for (int i = 0; i < firstDimension; i++) {
        beforeModifyArr += "[";
        afterModifyArr += "[";
        for (int ii = 0; ii < secondDimension; ii++) {
            prefix = (ii > 0) ? ", " : "";
            beforeModifyArr += prefix + to_string(sourceArray[i][ii]);
            if (abs(sourceArray[i][ii]) < -8 || abs(sourceArray[i][ii]) > 6) {
                modifieadArray[i][ii] = sourceArray[i][ii] * sourceArray[i][ii];
            } else {
                modifieadArray[i][ii] = sourceArray[i][ii];
            }
            afterModifyArr += prefix + to_string(modifieadArray[i][ii]);
        }
        beforeModifyArr += "]";
        afterModifyArr += "]";
    }


    cout << "-----------------------" << endl;
    cout << "Результат:" << endl;
    cout << "Массив до преобразования:" << endl;
    cout << beforeModifyArr << endl;
    cout << "Массив после преобразования:" << endl;
    cout << afterModifyArr << endl;

}