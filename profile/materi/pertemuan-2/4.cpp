#include <iostream> 
using namespace std; 
int main() { 
    string namaDepan, namaBelakang, namaLengkap; 
    cout << "Masukkan nama depan: "; 
    cin >> namaDepan;
    cout << "Masukkan nama belakang: "; 
    cin >> namaBelakang; 
    namaLengkap = namaDepan + " " + namaBelakang; 
    cout << "Nama Lengkap anda " << namaLengkap; 
    return 0; 
}