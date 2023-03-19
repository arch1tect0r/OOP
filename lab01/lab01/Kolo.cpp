#include "Kolo.h"
#include <iostream>
using namespace std;

Kolo::Kolo(double r) : r(r) {
    cout << "Konstruktor kola(" << r << ")" << endl;
    objectCountKolo++;
}
double Kolo::GetR() const {
    return r;
}

void Kolo::SetR(double r) {
    this->r = r;
}

double Kolo::Obwod() { //TODO 1
    return 2 * 3.14 * r;
}
double Kolo::Pole() { //TODO 2
    return 3.14*(r*r);
}
void Kolo::Wypisz(ostream& out) const { //TODO 3
    out << "This is Kolo " << "This is line: " << r << endl;
}
Kolo::~Kolo() { //TODO 4
    cout << "To jest destructor kola" << endl;
    objectCountKolo--;
}


