#include <iostream>
using namespace std;
int main() {
    int bilangan;
    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;
    if (bilangan > 0) {
        cout << "Anda memasukkan bilangan positif: " << bilangan << endl;
    }else{
        cout << "Anda memasukkan bilangan negatif: " << bilangan << endl;
    }
    return 0;
}