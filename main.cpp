#include <iostream>

using namespace std;

int main() {
    int a[] = {4, 8, 9, 24, 55, 12 };
    int i = 16;
    int *pi;
    int *maria;
    pi = &i;
    maria = pi;
    cout << *pi << endl;
    *maria+=8;
    cout << i << endl;
    cout << *(a-5) << endl;
    cout << a[5] << endl;
    return 0;
}
