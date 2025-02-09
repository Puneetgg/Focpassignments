#include <iostream>
using namespace std;

bool prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void factors(int n) {
    cout << "The factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int nextPrime(int n) {
    int next = n + 1;
    while (!prime(next)) {
        next++;
    }
    return next;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (prime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "The next prime number greater than " << n << " is " << nextPrime(n) << "." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        factors(n);
    }

    return 0;
}
