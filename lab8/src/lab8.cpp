#include <iostream>
#include <cmath>

using namespace std;

double calcFunction(double x, double a) {
    double ctg = 1.0 / tan(x + a);
    double sin2 = pow(sin(ctg), 2);

    return sin2;
}

void printResult(double x, double result) {
    cout << x << "\t" << result << endl;
}

void lab8() {
    int a = 3;
    double range[] = {-2.0, 8.0};
    double x = range[0];
    const double DELTA_X = 0.6;

    cout << "Результат вычисления" << endl;

    while(x <= range[1]) {
        double result = calcFunction(x, a);
        printResult(x, result);

        x += DELTA_X;
    }
}

