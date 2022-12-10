#include <iostream>
using namespace std;
struct Jarak {
    int kaki;
    float inci;
};
int main() {
    Jarak *ptr, d;
    ptr = &d;
    cout << "Masukkan kaki: ";
    cin >> (*ptr).kaki;
    cout << "Masukkan inci: ";
    cin >> (*ptr).inci;
    cout << "Informasi" << endl;
    cout << "Jarak = " << ptr->kaki << " kaki " << ptr->inci << " kaki";
    return 0;
}