#include "Prostopadl.h"
#include <iostream>
using namespace std;

Prostopadl::Prostopadl(double a, double b, double h) : a(a), b(b), h(h) {
    cout << "Konstruktor Prostopadl(" << a <<"," << b << "," << h << ")" << endl;
    objectCountProstopadl++;
}

Prostopadl::Prostopadl() : a(1), b(1), h(1) {
    cout << "Konstruktor Prostopadl(" << a <<"," << b << "," << h << ")" << endl;
    objectCountProstopadl++;
}
Prostopadl::Prostopadl(double a) : a(1) {
    cout << "Konstruktor Sześćian(" << a << ")" << endl;
    objectCountProstopadl++;
}
double Prostopadl::GetA() const {
    return a;
}
double Prostopadl::GetB() const {
    return b;
}
double Prostopadl::GetH() const {
    return h;
}
void Prostopadl::SetA(double a) {
    this->a = a;
}
void Prostopadl::SetB(double b) {
    this->b = b;
}
void Prostopadl::SetH(double h) {
    this->h = h;
}
double Prostopadl::Obwod() { //TODO 1
    return 2 * (a * h) + 2 * (b * h);
}
double Prostopadl::Pole() { //TODO 2
    return 2 * (a * h) + 2 * (b * h) + 2 * (a * b);
}
void Prostopadl::Wypisz(ostream& out) const { //TODO 3
    out << "This is Prostopadl " << "Height: " << h << "First side: " << a << "Second side: " << b << endl;
}
Prostopadl::~Prostopadl() { //TODO 4
    cout << "To jest destructor prostopadla" << endl;
    objectCountProstopadl--;
}

