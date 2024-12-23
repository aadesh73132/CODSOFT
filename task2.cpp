// Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.

#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Welcome to Calculator!" << endl;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The result is: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The result is: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The result is: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The result is: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
