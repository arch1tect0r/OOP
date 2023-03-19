#pragma once
#include <iostream>
using namespace std;

class Bryla {
protected:
    virtual void Wypisz(ostream& out) const = 0;
    
    friend ostream& operator << (ostream& os, const Bryla& figura);
    
public:
    virtual double Pole() = 0;
    virtual double Obwod() = 0;
    virtual ~Bryla();
    
};

