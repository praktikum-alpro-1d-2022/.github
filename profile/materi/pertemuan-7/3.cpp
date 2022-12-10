#include <iostream>
using namespace std;
int main() {
    double tinggi[5];
    double sum = 0;
    double count = 0;
    double average;
    cout << "Masukkan tinggi 5 mahasiswa: ";
    for (int i = 0; i < 5; ++i) {
        cin >> tinggi[i];
    }
    cout << "Tinggi Mahasiswa: ";
    for (const double &n : tinggi) {
        cout << n << " ";
        sum += n;
        ++count;
    }
    cout << "\nJumlah = " << sum << endl;
    average = sum / count;
    cout << "Rata-rata tinggi mahasiswa = " << average << endl;
    return 0;
}