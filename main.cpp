#include <iostream>

using namespace std;

int main() {
    //int *b = new int[5]{1,4,7,8,9};
    int b[] = {1,4,7,8,9};
    for ( int i = 0; i < 5; i++ ) {
        cout << b[ i ] << endl;
    }
    //delete[] b;
    return 0;
}