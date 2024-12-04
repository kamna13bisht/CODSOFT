#include <iostream>
using namespace std;

int main() {
    // Declare variables for the two numbers and the operation choice
    double num1, num2;
    int choice;

    // Display a menu for the user to choose the operation
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter the operation you want to perform (1/2/3/4): ";
    cin >> choice;

    // Ask the user for two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the selected operation
    switch (choice) {
        case 1:  // Addition
            cout << "Your answer is: " << num1 + num2 << endl;
            break;
        case 2:  // Subtraction
            cout << "Your answer is: " << num1 - num2 << endl;
            break;
        case 3:  // Multiplication
            cout << "Your answer is: " << num1 * num2 << endl;
            break;
        case 4:  // Division
            if (num2 != 0) {
                cout << "Your answer is: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operation selected!" << endl;
            break;
    }

    return 0;
}
