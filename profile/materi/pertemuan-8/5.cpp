#include <iostream>
using namespace std;
int main() {
    float arr[5];
    cout << "Masukkan 5 bilangan: ";
    for (int i = 0; i < 5; ++i) {
        cin >> *(arr + i) ;
    }
    cout << "Menampilkan 5 bilangan: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(arr + i) << endl ;
    }
    return 0;
}