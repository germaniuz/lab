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

int main() {
    bool runService = true;
    map <string, function<void()>> modules;
    modules["lab5"] = &lab5;
    modules["lab6"] = &lab6;
    modules["lab7"] = &lab7;
    modules["lab8"] = &lab8;
    string option;
    int actionInput;

    do {
        option = options();
        modules[option]();
        actionInput = nextStep();
        while (actionInput == 2) {
            modules[option]();
            actionInput = nextStep();
        }
        if (actionInput == 0) {
            runService = false;
        }
    } while(runService);

    return 0;
}

