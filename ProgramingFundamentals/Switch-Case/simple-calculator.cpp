#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Cannot divide by zero";
            break;

        case '%':
            if(num2 != 0)
                cout << "Remainder = " << num1 % num2;
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}