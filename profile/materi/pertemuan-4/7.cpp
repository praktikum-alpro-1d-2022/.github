#include <iostream>
using namespace std;
int main() {
    int bil;
    cout << "Masukkan bilangan bulat: ";
    cin >> bil;
    if (bil != 0) {
        if (bil > 0) {
            cout << "Bilangan positif." << endl;
        }
        else {
            cout << "Bilangan negatif." << endl;
        }
    }
    else {
        cout << "Bilangannya adalah 0 dan tidak positif atau negatif." << endl;
    }
    return 0;
}