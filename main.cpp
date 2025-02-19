#include <iostream>

using namespace std;

int main() {
    int a = 33;
    int &b = a;
    int c = 0xF;
    b = c;
    cout << a++ << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
