#include <iostream>

int main() {
    int marks;
    char grade;

    std::cout << "Enter the marks of the student: ";
    std::cin >> marks;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    std::cout << "The grade of the student is: " << grade << std::endl;

    return 0;
}