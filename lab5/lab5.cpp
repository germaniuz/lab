#include <iostream>
#include "../utils/utils.h"

using namespace std;

void lab5() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №5" << endl;

    string userInput;
    double A, B, C;

    cout << "Введите число A: ";
    cin >> userInput;

    while(!isDouble(userInput)) {
        cout << "Неверный тип. Введите число: ";
        cin >> userInput;
    }
    A = stod(userInput);

    cout << "Введите число B: ";
    cin >> userInput;
    while(!isDouble(userInput)) {
        cout << "Неверный тип. Введите число: ";
        cin >> userInput;
    }
    B = stod(userInput);

    cout << "Введите число C: ";
    cin >> userInput;
    while(!isDouble(userInput)) {
        cout << "Неверный тип. Введите число: ";
        cin >> userInput;
    }
    C = stod(userInput);

    if (A < B && B < C) {
        A *= 2;
        B *= 2;
        C *= 2;
    } else {
        A *= -1;
        B *= -1;
        C *= -1;
    }
    cout << "-----------------------" << endl;
    cout << "Результат:" << endl;
    cout << "A=" << A << "; B=" << B << "; C=" << C << endl;
}
