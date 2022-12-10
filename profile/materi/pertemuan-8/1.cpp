#include <iostream>
using namespace std;
int main()
{
    int nilai_absen = 85;
    int nilai_tugas = 90;
    int nilai_uts = 70;
    cout << "Alamat dari nilai absen: "<< &nilai_absen << endl;
    cout << "Alamat dari nilai tugas: " << &nilai_tugas << endl;
    cout << "Alamat dari nilai uts: " << &nilai_uts << endl;
}