#include <iostream>
using namespace std;
int main() {
    int var = 9;
    int* variabelPointer;
    variabelPointer = &var;
    cout << "var = " << var << endl;
    cout << "*variabelPointer = " << *variabelPointer << endl << endl;
    cout << "Merubah nilai yang ada di variabel var menjadi 7:" << endl;
    var = 7;
    cout << "var = " << var << endl;
    cout << "*variabelPointer = " << *variabelPointer << endl << endl;
    cout << "Merubah nilai *variabelPointer menjadi 3:" << endl;
    *variabelPointer = 3;
    cout << "var = " << var << endl;
    cout << "*variabelPointer = " << *variabelPointer << endl;
    return 0;
}