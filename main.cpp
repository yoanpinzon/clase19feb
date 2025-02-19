#include <iostream>

using namespace std;

int main() {
    for ( int i = 1; i < 30; i++ ) {
        if ( i%3 ) continue;
        cout << i << " ";
        if ( i == 15 ) break;
    }
    return 0;
}