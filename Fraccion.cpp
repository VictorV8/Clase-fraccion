#include "Fraccion.h"
/*Fraccion :: Fraccion(const Fraccion& f){
    *this = f;
}*/

/*Fraccion :: Fraccion(){
    this -> numerador = 1;
    this -> denominador = 1;
}*/

int Fraccion :: mcd(int a, int b){
    if(b == 0){
        return a;
    }
    else
        return mcd(b,a%b);
}

void Fraccion :: simplifica(){
    int divisor = 1; 
    if(numerador > denominador)
    	divisor = mcd(numerador,denominador);
    else 
        divisor = mcd(denominador,numerador);
    numerador /= divisor;
    denominador /= divisor;
}

Fraccion :: Fraccion(int num, int den){
    this -> numerador = num;
    this -> denominador = den;
}

Fraccion Fraccion :: operator + (const Fraccion& f2 ){
    Fraccion fr;
    fr.denominador = this -> denominador * f2.denominador;
    fr.numerador = this -> numerador * f2.denominador + 
		      f2.numerador * this -> denominador;
    return fr;
}

ostream& operator << (ostream& o, const Fraccion& f){
    return o << f.numerador << "/" << f.denominador;
}
//    friend istream& operator >> (istream& i, const Fraccion& f);

