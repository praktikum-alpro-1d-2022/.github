#include <iostream>
using namespace std;
int main() {
    int bil[2][3];
    cout << "Masukkan 6 bilangan: " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> bil[i][j];
        }
    }
    cout << "Bilangan: " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "bil[" << i << "][" << j << "]: " << bil[i][j] << endl;
        }
    }
    return 0;
}