#include <iostream>

using namespace std;

void intercambiar(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4, b = 5;
    intercambiar(a, b);
    cout << "Después de la función:\na = " << a << "\nb = " << b << endl;
    return 0;
}