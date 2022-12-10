#include <iostream> 
using namespace std; 
int main() { 
    int keliling,panjang,lebar; 
    cout << "Masukkan panjang: "; 
    cin >> panjang; 
    cout << "Masukkan lebar: "; 
    cin >> lebar; 
    keliling = 2 * (panjang+lebar); 
    cout << "Keliling persegi panjang = " << keliling; 
    return 0; 
}