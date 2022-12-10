#include <iostream>
using namespace std;
int main() {
    int nilai[5] = {95, 63, 74, 88, 80};
    cout << "Nilai Mahasiswa: ";
    for (const int &n : nilai) {
        cout << n << " ";
    }
    cout << "\nNilai Mahasiswa: ";
    for (int i = 0; i < 5; ++i) {
        cout << nilai[i] << " ";
    }
    return 0;
}