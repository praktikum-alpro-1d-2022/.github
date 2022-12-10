#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Masukkan bilangan 1: ";
    cin >> a;
    cout << "Masukkan bilangan 2: ";
    cin >> b;
    if(a > b){
        cout << a << " lebih besar dari " << b << endl;
    }else if(a < b){
        cout << a << " lebih kecil dari " << a << endl;
    }else{
        cout << a << " sama dengan " << b << endl;
    }
    return 0;
}