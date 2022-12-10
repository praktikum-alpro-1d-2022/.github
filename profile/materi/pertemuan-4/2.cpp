#include <iostream>
using namespace std;
int main() {
    string username;
    string password;
    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;
    if (username == "admin" && password == "admin123") {
        cout << "Login berhasil" << endl;
    }
    return 0;
}