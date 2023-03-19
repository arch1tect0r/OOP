#include "Trojkat.h"
#include <math.h>
#include <iostream>
using namespace std;

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {
    cout << "Konstruktor Trojkat(" << a <<"," << b <<"," << c << ")" << endl;
    objectCountTrojkat++;
}
double Trojkat::GetA() const {
    return a;
}
double Trojkat::GetB() const {
    return b;
}
double Trojkat::GetC() const {
    return c;
}
void Trojkat::SetA(double a) {
    this->a = a;
}
void Trojkat::SetB(double b) {
    this->b = b;
}
void Trojkat::SetC(double c) {
    this->c = c;
}
double Trojkat::Obwod() { //TODO 1
    return a + b + c;
}
double Trojkat::Pole() { //TODO 2
    double p = (a+b+c)/2;
    double res = sqrt(p*(p-a)*(p-b)*(p-c));
    return res;
}
void Trojkat::Wypisz(ostream& out) const { //TODO 3
    out << "This is Trojkąt " << "First side: " << a << "Second side: " << b << "Third side: " << c << endl;
}
Trojkat::~Trojkat() { //TODO 4
    cout << "To jest destructor trojkata" << endl;
    objectCountTrojkat--;
}

