#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> num;
    float* ptr;
    ptr = new float[num];
    cout << "Masukkan IPK Mahasiswa." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Mahasiswa" << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    cout << "\nTampilkan IPK Mahasiswa." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }
    delete[] ptr;
    return 0;
}