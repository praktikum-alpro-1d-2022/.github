#include <iostream>
using namespace std;
int main() {
    int nilai[5];
    cout << "Masukkan 5 nilai mahasiswa: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> nilai[i];
    }
    cout << "Nilai Mahasiswa UNSIKA: ";
    for (int n = 0; n < 5; ++n) {
        cout << nilai[n] << " ";
    }
    return 0;
}