#include <iostream>
using namespace std;
int main() {
    int var = 10;
    int* variabelPointer;
    variabelPointer = &var;
    cout << "var = " << var << endl;
    cout << "Alamat dari vari (&var) = " << &var << endl << endl;
    cout << "Variabel Pointer = " << variabelPointer << endl;
    cout << "Isi alamat yang ditunjuk oleh variabelPointer = " << *variabelPointer << endl;
    return 0;
}