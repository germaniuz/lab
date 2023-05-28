//
// Created by German Martirosyan on 28.05.2023.
// Написать программу, которая вычисляет с помощью функции выражение y=sin2x+cos(x+1) в указанном диапазоне с заданным шагом и печатает таблицу
// значений y.
//
#include <iostream>
#include "../utils/include//utils.h"

using namespace std;

void lab17() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №17" << endl;

    string userInput;
    double range[2];
    double deltaX;

    cout << "Введите минимальное значение X диапазона";
    cin >> userInput;
    while(!isDouble(userInput)) {
        cout << "Неверный тип. Введите число";
        cin >> userInput;
    }
    range[0] = stod(userInput);

    cout << "Введите максимальное значение X диапазона";
    cin >> userInput;
    while(!isDouble(userInput)) {
        cout << "Неверный тип. Введите число";
        cin >> userInput;
    }
    range[1] = stod(userInput);

    cout << "Введите дельта X";
    cin >> userInput;
    while(!isDouble(userInput)) {
        cout << "Неверный тип. Введите число";
        cin >> userInput;
    }
    deltaX = stod(userInput);
}