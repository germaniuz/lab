//
// Created by German Martirosyan on 05.06.2023.
//

#include <iostream>
#include <string>

using namespace std;

void lab19() {
    cout << "=================" << endl;
    cout << "Лабораторная работа по строкам" << endl;

    const int SURNAME_SIZE = 12;
    char surname[SURNAME_SIZE] = "Martirosyan";

    for (int i = 0; i <= SURNAME_SIZE; i++) {
        cout << surname[SURNAME_SIZE - i];
    }
    cout << endl;
}