#include <iostream>
using namespace std;
int main() {
    char oper;
    float num1, num2;
    cout << "Masukan operator (+, -, *, /): ";
    cin >> oper;
    cout << "Masukan 2 bilangan: " << endl;
    cin >> num1 >> num2;
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
        25
        break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default:
            cout << "Error! Operator salah";
        break;
    }
    return 0;
}