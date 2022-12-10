#include <iostream>
using namespace std;
int main() {
    int bil;
    int sum = 0;
    while (true) {
        cout << "Masukan bilangan bulat: ";
        cin >> bil;
        if (bil < 0) {
            break;
        }
        sum += bil;
    }
    cout << "Total Penjumlahan " << sum << endl;
    return 0;
}