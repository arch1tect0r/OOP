#pragma once
#include <iostream>
using namespace std;

class FiguraPlaska {
protected:
    virtual void Wypisz(ostream& out) const = 0;
    
    friend ostream& operator << (ostream& os, const FiguraPlaska& figura);
    
public:
    virtual double Pole() = 0;
    virtual double Obwod() = 0;
    virtual ~FiguraPlaska();
    
};
