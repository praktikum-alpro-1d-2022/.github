#include <iostream>
using namespace std;
void display(char = '*', int = 3);
int main() {
    int count = 5;
    cout << "Tidak ada argumen: ";
    display();
    cout << "Hanya argumen pertama: ";
    display('#');
    cout << "Dua argumen diisi: ";
    display('$', count);
    return 0;
}
void display(char c, int count) {
    for(int i = 1; i <= count; ++i){
        cout << c;
    }
    cout << endl;
}