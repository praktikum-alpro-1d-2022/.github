#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int bil = 0;
    while (bil >= 0) {
        sum += bil;
        cout << "Masukan bilangan positif: ";
        cin >> bil;
        if (bil > 50) {
            cout << "Jumlahnya lebih besar dari 50 dan tidak akan dihitung." << endl;
            bil = 0;
            continue;
        }
    }
    cout << "Total Penjumlahan " << sum << endl;
    return 0;
}