#include <iostream>
using namespace std;
int main() {
    int bil = 0;
    int sum = 0;
    do {
        sum += bil;
        cout << “Masukan bilangan bulat: “;
        cin >> bil;
    }
    while (bil >= 0);
    cout << “\nTotal Penjumlahan “ << sum << endl;
    return 0;
}