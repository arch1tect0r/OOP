#include "Prostokat.h"
#include <iostream>
using namespace std;

Prostokat::Prostokat(double a, double b) : a(a), b(b) {
    cout << "Konstruktor Prostokąta(" << a <<"," << b << ")" << endl;
    objectCountProstokat++;
}
double Prostokat::GetA() const {
    return a;
}
double Prostokat::GetB() const {
    return b;
}
void Prostokat::SetA(double a) {
    this->a = a;
}
void Prostokat::SetB(double b) {
    this->b = b;
}
double Prostokat::Obwod() { //TODO 1
    return (a + b) * 2;
}
double Prostokat::Pole() { //TODO 2
    return a * b;
}
void Prostokat::Wypisz(ostream& out) const { //TODO 3
    out << "This is Prostokąt " << "Height: " << a << "Width: " << b << endl;
}
Prostokat::~Prostokat() { //TODO 4
    cout << "To jest destructor prostokata" << endl;
    objectCountProstokat--;
}

