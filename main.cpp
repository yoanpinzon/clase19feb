#include <iostream>

using namespace std;

template< typename T>
T suma( T x, T y ) {
    return x + y;
}

int main() {
    int a = 4, b = 8;
    float e = 4.4, f = 9.9;
    string m{"julia"}, n{"ernestina"};
    cout << suma( a, b ) << endl;
    cout << suma( e, f ) << endl;
    cout << suma( m, n ) << endl;
    return 0;
}