#include <iostream>
using namespace std;
int factorial(int);
int main() {
    int bil, hasil;
    cout << "Masukkan bilangan: ";
    cin >> bil;
    hasil = factorial(bil);
    cout << "Faktorial dari " << bil << " = " << hasil;
    return 0;
}
int factorial(int bil) {
    if (bil > 1) {
        return bil * factorial(bil - 1);
    } else {
        return 1;
    }
}