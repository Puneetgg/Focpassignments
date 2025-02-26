#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int n = 1; // Number of times interest applied per time period (compounded annually)
    double principal, rate, time, amount, compoundInterest;

    // User input for principal amount, rate of interest, and time period
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest (in %): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculate the amount after interest
    amount = principal * pow((1 + rate / (100 * n)), n * time);

    // Calculate the compound interest
    compoundInterest = amount - principal;

    // Display the results
    cout << "The compound interest is: " << compoundInterest << endl;
    cout << "The total amount after " << time << " years is: " << amount << endl;

    return 0;
}