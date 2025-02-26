#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();
    string input;

    cout << "Enter integers (type 'exit' to finish):" << endl;

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }

        try {
            int number = stoi(input);
            sum += number;
            count++;
            if (number > max) {
                max = number;
            }
            if (number < min) {
                min = number;
            }
        } catch (invalid_argument& e) {
            cout << "Invalid input. Please enter an integer or 'exit' to finish." << endl;
        }
    }

    cout << "Sum of all entered numbers: " << sum << endl;
    cout << "Count of valid integers entered: " << count << endl;
    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

    return 0;
}