//
// Created by German Martirosyan on 27.05.2023.
//
#include <iostream>
#include <string>

using namespace std;

bool isInt(string v) {
    if (v.empty()) {
        return false;
    }

    for (int i = 0; i < v.length(); i++) {
        if (v[0] != '-' || i != 0 ) {
            if (!isdigit(v[i])) {
                return false;
            }
        }
    }

    return true;
}

bool isDouble(string v) {
    if (v.empty()) {
        return false;
    }

    int dotCount = 0;

    for (int i = 0; i < v.length(); i++) {
        if (v[0] == '.') {
            return false;
        }
        if (v[i] == '.') {
            dotCount++;
            if (dotCount > 1 || !isdigit(v[i - 1])) {
                return false;
            }
        } else if (v[0] != '-' || i != 0 ) {
            if (!isdigit(v[i])) {
                return false;
            }
        }
    }

    return true;
}