#include <iostream>
#include "Bryla.h"
using namespace std;

ostream& operator<<(ostream& os, const Bryla& figura) {
    figura.Wypisz(os);
    return os;
}
Bryla::~Bryla() {
    
}

