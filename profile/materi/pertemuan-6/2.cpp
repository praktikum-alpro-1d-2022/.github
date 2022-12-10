#include <iostream>
using namespace std;
void cekBilangan(int bilangan) {
    if((bilangan % 2) == 0){
        cout << bilangan << " Merupakan bilangan genap";
    }else{
        cout << bilangan << " Merupakan bilangan ganjil";
    }
}
int main() {
    int bil;
    cout << "Masukkan bilangan: ";
    cin >> bil;
    cekBilangan(bil);
    return 0;
}