#include <iostream>
#include <map>
#include <string>
#include "options/include/options.h"
#include "lab5/include/lab5.h"
#include "lab6/include/lab6.h"
#include "lab7/include/lab7.h"
#include "lab8/include/lab8.h"
#include "utils/include/utils.h"

using namespace std;

bool validateActionInput(const string& input) {
    return isInt(input) && (stoi(input) == 1 || stoi(input) == 2 || stoi(input) == 3);
}

int main() {
    bool runService = true;
    map <string, function<void()>> modules;
    modules["lab5"] = &lab5;
    modules["lab6"] = &lab6;
    modules["lab7"] = &lab7;
    modules["lab8"] = &lab8;
    string option;
    string actionInput;
    bool validation;

    do {
        option = options();
        modules[option]();
        cout << "Введите" << endl << "1 - выйти в главное меню" << endl << "2 - повторить тест" << endl << "0 - выйти из программы" << endl;
        cout << "Ваш выбор: ";
        cin >> actionInput;
        validation = validateActionInput(actionInput);
        while (!validation) {
            cout << "Неверный ввод, повторите: ";
            cin >> actionInput;
            validation = validateActionInput(actionInput);
        };

        if (stoi(actionInput) == 0) {
            cout << "Спасибо за внимание";
            runService = false;
        }
    } while(runService);

    return 0;
}

