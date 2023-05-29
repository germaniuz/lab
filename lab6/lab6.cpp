#include <iostream>
#include <string>
#include "../utils/utils.h"

using namespace std;

void lab6() {
    cout << "=================" << endl;
    cout << "Лабораторная работа №6" << endl;
    int age;
    string userInput;
    string ageString;

    cout << "Введите возраст в диапазоне от 20 до 49 лет включительно: ";
    cin >> userInput;

    while(!isInt(userInput)) {
        cout << "Неверный тип. Введите возраст: ";
        cin >> userInput;
    }

    age = stoi(userInput);

    int lastAgeDigit = age % 10;

    switch (lastAgeDigit) {
        case 1:
            ageString = "год";
            break;
        case 2:
        case 3:
        case 4:
            ageString = "года";
            break;
        default:
            ageString = "лет";
            break;
    }

    cout << "-----------------------" << endl;
    cout << "Результат:" << endl;
    cout << age << " " << ageString << endl;
}