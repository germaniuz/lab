//
// Created by German Martirosyan on 27.05.2023.
//
#include <iostream>
#include <map>
#include <string>
#include "../utils/utils.h"

using namespace std;

map<string, string> labList;

int labNumberShift = 5;

string labNum(int iterator) {
    return to_string(iterator + labNumberShift);
}

void createList() {
    for (int i = 0; i < 15; i++) {
        if (i != 4 && i != 9 && i != 10 && i != 11) {
            labList["lab" + labNum(i)] = "Лабораторная №" + labNum(i);
        }
    }
}

bool validateOption(const string &option) {
    return isInt(option) && stoi(option) >= labNumberShift && stoi(option) < labList.size() + labNumberShift;
}

bool validateNextStepInput(const string &input) {
    return isInt(input) && (stoi(input) == 0 || stoi(input) == 1 || stoi(input) == 2);
}

string getOptionFormUser(string option) {
    cout << "Номер: ";
    cin >> option;
    while (!validateOption(option)) {
        cout << "Вы ввели неверный номер лабораторной работы, повторите ввод: " << endl;
        cin >> option;
    }

    return option;
}

string options() {
    createList();
    string userInput;
    cout << "Выберите номер лабораторной работы:" << endl;

    for (int i = 0; i < labList.size(); i++) {
        string labKey = "lab" + labNum(i);
        if (!empty(labList[labKey])) {
            cout << i + labNumberShift << ". " << labList[labKey] << endl;
        }

    }

    return "lab" + getOptionFormUser(userInput);
}

int nextStep() {
    string actionInput;

    cout << "Введите" << endl << "1 - выйти в главное меню" << endl << "2 - повторить выбранную лабораторную работу"
         << endl << "0 - выйти из программы" << endl;
    cout << "Ваш выбор: ";

    cin >> actionInput;

    bool validation = validateNextStepInput(actionInput);

    while (!validation) {
        cout << "Неверный ввод, повторите: ";
        cin >> actionInput;
        validation = validateNextStepInput(actionInput);
    };

    if (stoi(actionInput) == 0) {
        cout << "Спасибо за внимание";

        return 0;
    }

    return stoi(actionInput);
}
