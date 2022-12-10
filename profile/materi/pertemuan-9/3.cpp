#include <iostream>
using namespace std;
struct Warnet {
    string name;
    int hours;
    int price;
};
Warnet getData(Warnet);
void displayData(Warnet);
int main() {
    Warnet w, temp;
    temp = getData(w);
    w = temp;
    displayData(w);
    return 0;
}
Warnet getData(Warnet w) {
    int const ONEHOURS = 5000;
    cout << "Masukkan Nama Lengkap: ";
    getline(cin, w.name);
    cout << "Masukkan Jam: ";
    cin >> w.hours;
    w.price = w.hours * ONEHOURS;
    return w;
}
void displayData(Warnet w) {
    cout << "\nInformation" << endl;
    cout << "Nama: " << w.name << endl;
    cout <<"Jam: " << w.hours << endl;
    cout << "Harga: " << w.price;
}