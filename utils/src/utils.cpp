//
// Created by German Martirosyan on 27.05.2023.
//
#include <string>

using namespace std;

bool isInt(string v) {
    for (int i=0; i<v.length(); i++)
        if (isdigit(v[i]) == true)
            return true;
    return false;
}