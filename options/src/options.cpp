//
// Created by German Martirosyan on 27.05.2023.
//
#include <iostream>
#include <map>
#include <string>
#include "../../utils/include/utils.h"

using namespace std;

map<string, string> labList;

int labNumberShift = 5;
string labNum(int iterator) {
    return to_string(iterator + labNumberShift);
}

void createList() {
    for (int i = 0; i < 11; i++) {
        labList["lab" + labNum(i)] = "Лабораторная №" + labNum(i);
    }
}

bool validateOption(const string& option) {
    return isInt(option) && stoi(option) >= labNumberShift && stoi(option) < labList.size() + labNumberShift;
}

string getOptionFormUser(string option) {
    cout << "Номер: ";
    cin >> option;
    while(!validateOption(option)) {
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
        cout << i + labNumberShift << ". " << labList[labKey] << endl;
    }

    return "lab" + getOptionFormUser(userInput);
}
