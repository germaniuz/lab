#include <iostream>
#include <stdexcept>
using namespace std;

void lab5() {
    cout << "----------------------" << endl;
    cout << "Лабораторная работа №5" << endl;
    float A, B, C;
    cout << "Введите три числа разделенных пробелом: ";

    cin >> A >> B >> C;
    try {
        if (A < B && B < C) {
            A *= 2;
            B *= 2;
            C *= 2;
        } else {
            A *= -1;
            B *= -1;
            C *= -1;
        }
        cout << "A=" << A << "; B=" << B << "; C=" << C << endl;
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
