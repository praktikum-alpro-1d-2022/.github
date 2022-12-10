#include <iostream>
using namespace std;
int main() {
    int a, b;
    a = 25;
    b = 70;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nSetelah a += b;" << endl;
    a += b; // a = a +b
    cout << "a = " << a << endl;
    return 0;
}