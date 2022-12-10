#include <iostream>
using namespace std;
int penjumlahan(int bil1, int bil2){
    return (bil1 + bil2);
}
int pengurangan(int bil1, int bil2){
    return (bil1 - bil2);
}
int perkalian(int bil1, int bil2){
    return (bil1 * bil2);
}
int pembagian(int bil1, int bil2){
    return (bil1 / bil2);
}
int main() {
    int bil1, bil2;
    cout << "Masukkan 2 bilangan: ";
    cin >> bil1 >> bil2;
    cout << "Hasil penjumlahan: " << penjumlahan(bil1, bil2) << endl;
    cout << "Hasil pengurangan: " << pengurangan(bil1, bil2) << endl;
    cout << "Hasil perkalian: " << perkalian(bil1, bil2) << endl;
    cout << "Hasil pembagian: " << pembagian(bil1, bil2) << endl;
    return 0;
}