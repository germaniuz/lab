//
// Created by German Martirosyan on 03.06.2023.
// 16.	Ввести двумерный массив  . Определить в нём произведение тех элементов, чей модуль лежит вне диапазона  .
//

#include <iostream>
#include "../utils/utils.h"
#include <cstdlib>

using namespace std;

void lab12() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №12" << endl;

    int **myArr = new int*[4];
    int result = 0;

    for (int i = 0; i < 4; i++) {
        cout << "Введите " << i + 1 << " подмассив" << endl;
        myArr[i] = createArray(3);
    }

    for (int i = 0; i < 4; i++) {
        for (int ii = 0; ii < 3; ii++) {
            if (abs(myArr[i][ii]) < 1 || abs(myArr[i][ii]) > 5) {
                result = (result == 0) ? myArr[i][ii] : result *  myArr[i][ii];
            }
        }
    }

    cout << "-----------------------" << endl;
    cout << "Результат:" << result << endl;

}