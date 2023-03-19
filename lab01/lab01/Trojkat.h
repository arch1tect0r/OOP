#pragma once
#include "FiguraPlaska.h"
using namespace std;

class Trojkat : public FiguraPlaska {
    double a,b,c;
protected:
    void Wypisz(ostream& out) const override;
public:
    Trojkat(double a, double b, double c);
    static int objectCountTrojkat;
    double GetA() const;
    void SetA(double a);
    double GetB() const;
    void SetB(double b);
    double GetC() const;
    void SetC(double c);
    double Obwod() override;
    double Pole() override;
    ~Trojkat() override;
private:
};

