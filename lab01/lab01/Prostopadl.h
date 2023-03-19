#pragma once
#include "Bryla.h"
using namespace std;

class Prostopadl : public Bryla {
private:
    double a,b,h;
protected:
    void Wypisz(ostream& out) const override;
public:
    static int objectCountProstopadl;
    Prostopadl(double a, double b, double h);
    Prostopadl();
    Prostopadl(double a);
    double GetA() const;
    void SetA(double a);
    double GetB() const;
    void SetB(double b);
    double GetH() const;
    void SetH(double h);
    double Obwod() override;
    double Pole() override;
    ~Prostopadl() override;
};

