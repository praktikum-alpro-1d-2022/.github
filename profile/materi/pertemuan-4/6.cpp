#include <iostream>
using namespace std;
int main() {
    int kode;
    cout <<"Tujuan Wisata :" <<endl;
    cout <<"1: Bandung 2: Yogyakarta 3: Bali 4: Lombok" <<endl;
    cout <<"Masukkan kode tujuan : ";
    cin >>kode;
    if(kode==1)
        cout <<"Bandung" <<endl;
    else if(kode==2)
        cout <<"Yoyakarta" <<endl;
    else if(kode==3)
        cout <<"Bali" <<endl;
    else if(kode==4)
        cout <<"Lombok" <<endl;
    else
        cout <<"Pilihan Anda salah...";
    return 0;
}