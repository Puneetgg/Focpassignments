#include <iostream>

using namespace std;

unsigned int circularLeftShift(unsigned int num, unsigned int shift) {
    unsigned int bits = sizeof(num) * 8;
    shift = shift % bits;
    return (num << shift) | (num >> (bits - shift));
}

unsigned int circularRightShift(unsigned int num, unsigned int shift) {
    unsigned int bits = sizeof(num) * 8;
    shift = shift % bits;
    return (num >> shift) | (num << (bits - shift));
}

int main() {
    unsigned int num, shift;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter the number of positions to shift: ";
    cin >> shift;

    unsigned int leftShifted = circularLeftShift(num, shift);
    unsigned int rightShifted = circularRightShift(num, shift);

    cout << "Original number: " << num << endl;
    cout << "After circular left shift by " << shift << " positions: " << leftShifted << endl;
    cout << "After circular right shift by " << shift << " positions: " << rightShifted << endl;

    return 0;
}