#include <iostream>
using namespace std;
int main() {
    int matrik[3][2] = {{2, -5},
    {4, 0},
    {9, 1}};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Matrik[" << i << "][" << j << "] = " << matrik[i][j] << endl;
        }
    }
    return 0;
}