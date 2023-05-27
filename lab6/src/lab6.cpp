#include <iostream>
#include <string>

using namespace std;

void lab6() {
    cout << "----------------------" << endl;
    cout << "Лабораторная работа №6" << endl;
    int age;
    string ageString;
    cout << "Введите возраст в диапазоне от 20 до 49 лет включительно: " << endl;
    cin >> age;

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

    cout << age << " " << ageString << endl;
}