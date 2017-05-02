#include <iostream>

using namespace std;

class Fraccion
{
private:
    int numerador;
    int denominador;
    int mcd(int a, int b);

public:
//    Fraccion();
    Fraccion(int num=1, int den=1);
    void simplifica();
//    Fraccion(const Fraccion& f);
    Fraccion operator + (const Fraccion& f2);
    Fraccion operator - (const Fraccion& f2);
    Fraccion operator * (const Fraccion& f2);
    Fraccion operator / (const Fraccion& f2);
    
    friend ostream& operator << (ostream& o, const Fraccion& f);
    friend istream& operator >> (istream& i, const Fraccion& f);
};
