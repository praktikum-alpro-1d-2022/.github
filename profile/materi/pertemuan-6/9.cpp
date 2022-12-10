#include <iostream>
using namespace std;
void test()
{
    static int a = 0;
    a += 1;
    cout << "Ini adalah pemanggilan fungsi ke-" << a << endl;
}
int main()
{
    test();
    test();
    return 0;
}