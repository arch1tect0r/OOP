#pragma once
#include "FiguraPlaska.h"
using namespace std;

class Kolo : public FiguraPlaska {
private:
    double r;
protected:
    void Wypisz(ostream& out) const override;
public:
    Kolo(double r);
    static int objectCountKolo;
    double GetR() const;
    void SetR(double r);
    double Obwod() override;
    double Pole() override;
    ~Kolo() override;
};

