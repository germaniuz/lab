//
// Created by German Martirosyan on 28.05.2023.
// Написать программу, которая вычисляет с помощью функции выражение y=sin2x+cos(x+1) в указанном диапазоне с заданным шагом и печатает таблицу
// значений y.
//
#include <iostream>
#include "../utils/utils.h"
#include <cmath>

using namespace std;

double inputDouble(bool checkZero = false) {
    string userInput;
    cin >> userInput;

    if (checkZero) {
        while (stod(userInput) == 0) {
            cout << "Дельта не может быть нулевым значением: ";
            cin >> userInput;
        }
    }

    while (!isDouble(userInput)) {
        cout << "Неверный тип. Введите число";
        cin >> userInput;
    }

    return stod(userInput);
}

void lab17() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №17" << endl;

    double range[2];
    double deltaX;

    cout << "Введите минимальное значение X диапазона: ";

    range[0] = inputDouble();

    cout << "Введите максимальное значение X диапазона: ";
    range[1] = inputDouble();

    cout << "Введите дельта X: ";
    deltaX = inputDouble(true);

    double minX = min(range[0], range[1]);
    double maxX = max(range[0], range[1]);

    cout << "-----------------------" << endl;
    cout << "Результат:" << endl;

    while (minX <= maxX) {
        double result = pow(sin(minX), 2) + cos(minX + 1);
        printFormulaResult(minX, result);

        if (deltaX > 0 ) {
            minX += deltaX;
        } else {
            minX -= deltaX;
        }
    }
}