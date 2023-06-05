#include <iostream>
#include <map>
#include <string>
#include "options/options.h"
#include "lab5/lab5.h"
#include "lab6/lab6.h"
#include "lab7/lab7.h"
#include "lab8/lab8.h"
#include "lab10/lab10.h"
#include "lab11/lab11.h"
#include "lab12/lab12.h"
#include "lab13/lab13.h"
#include "lab17/lab17.h"
#include "lab18/lab18.h"
#include "lab19/lab19.h"
#include "utils/utils.h"

using namespace std;

int main() {
    bool runService = true;
    map <string, function<void()>> modules;
    modules["lab5"] = &lab5;
    modules["lab6"] = &lab6;
    modules["lab7"] = &lab7;
    modules["lab8"] = &lab8;
    modules["lab10"] = &lab10;
    modules["lab11"] = &lab11;
    modules["lab12"] = &lab12;
    modules["lab13"] = &lab13;
    modules["lab17"] = &lab17;
    modules["lab18"] = &lab18;
    modules["lab19"] = &lab19;
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

