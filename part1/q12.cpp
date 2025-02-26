#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

void solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "The roots are real and equal: " << root << endl;
    } else {
        complex<double> root1 = (-b + sqrt(complex<double>(discriminant))) / (2.0 * a);
        complex<double> root2 = (-b - sqrt(complex<double>(discriminant))) / (2.0 * a);
        cout << "The roots are complex: " << root1 << " and " << root2 << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    solveQuadratic(a, b, c);

    return 0;
}