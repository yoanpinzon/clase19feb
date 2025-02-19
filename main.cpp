#include <iostream>

using namespace std;

int main() {
    int b[] = {3, 4, 5, 7, 8, 9};
    int a[8];
    a[0] = 9;
    a[1] = 19;
    a[2] = 8;
    a[3] = 3;
    a[4] = 12;
    a[5] = 99;
    a[6] = 109;
    a[7] = 33;
    int s{0};
    for (int i = 0; i < 8; i++) {
        cout << a[i] << endl;
        s += a[i];
    }
    cout << endl;
    for (int i = 0; i < 6; i++) {
        cout << b[i] << endl;
    }
    cout << "suma = " << s << endl;
    return 0;
}
