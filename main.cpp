#include <iostream>

using namespace std;

int main() {
    try {
        cout << "hola mundo ";
        throw 4;
        cout << "cruel" << endl;
    }
    catch ( int e ) {
        cout << e << endl;
    }

    return 0;
}