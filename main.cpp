#include <iostream>
#include "Fraccion.h"

using namespace std;

int main(){
    Fraccion a;
    Fraccion b(7,3);
    Fraccion d(1,6);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "d = " << d << endl;

    Fraccion c = a + b + d;
    cout << a << " + " << b << " + " << d << " = " << c << endl;
    c.simplifica();
    cout << c << endl;
    return 0;
}
