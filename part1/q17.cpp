#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

int integerDivision(int dividend, int divisor) {
    if (divisor == 0) {
        throw invalid_argument("Divisor cannot be zero");
    }

    int quotient = 0;
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    dividend = abs(dividend);
    divisor = abs(divisor);

    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    return sign * quotient;
}

double floatingPointDivision(double dividend, double divisor, int precision = 10) {
    if (divisor == 0.0) {
        throw invalid_argument("Divisor cannot be zero");
    }

    double quotient = 0.0;
    double sign = ((dividend < 0.0) ^ (divisor < 0.0)) ? -1.0 : 1.0;

    dividend = abs(dividend);
    divisor = abs(divisor);

    for (int i = 0; i < precision; ++i) {
        int intPart = 0;
        while (dividend >= divisor) {
            dividend -= divisor;
            intPart++;
        }
        quotient += intPart / pow(10, i);
        dividend *= 10;
    }

    return sign * quotient;
}

int main() {
    try {
        int intDividend = 10, intDivisor = 3;
        double floatDividend = 10.0, floatDivisor = 3.0;

        cout << "Integer Division: " << intDividend << " / " << intDivisor << " = " << integerDivision(intDividend, intDivisor) << endl;
        cout << "Floating Point Division: " << floatDividend << " / " << floatDivisor << " = " << floatingPointDivision(floatDividend, floatDivisor) << endl;
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}