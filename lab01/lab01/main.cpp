#include <iostream>
#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"
#include "Prostopadl.h"
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Zwierzę mówi!" << endl;
    }
};

class Dog : public Animal {
public:
    // przeciążanie funkcji speak
    void speak(string bark) {
        cout << "Pies szczeka: " << bark << endl;
    }
    // nadpisywanie funkcji speak
    void speak() override {
        cout << "Hau hau!" << endl;
    }
};

int Prostokat::objectCountProstokat = 0;
int Kolo::objectCountKolo = 0;
int Trojkat::objectCountTrojkat = 0;
int Prostopadl::objectCountProstopadl = 0;

int main() {

//    int size = 3;
//    FiguraPlaska* figury[size];
//    figury[0] = new Kolo(2);
//    figury[1] = new Prostokat(2, 4);
//    figury[2] = new Trojkat(6, 7, 8);
//
//    for (int i = 0; i < size; i++) {
//        cout << "Figura " << i + 1 << ":" << endl;
//        cout << "Obwod: " << figury[i]->Obwod() << endl;
//        cout << "Pole: " << figury[i]->Pole() << endl;
//    }
    
    Kolo k = Kolo(10);
    cout << "Count of Kolo: " << Kolo::objectCountKolo << endl;
    cout << "Obwod Kola: " << k.Obwod() << endl;
    cout << "Pole Kola: " << k.Pole() << endl;
    cout << "-----------------" << endl;
    Prostokat *p = new Prostokat(10, 15);
    cout << "Count of Prostokat: " << Prostokat::objectCountProstokat << endl;
    cout << "Obwod Prostokata: " << p->Obwod() << endl;
    cout << "Pole Prostokat: " << p->Pole() << endl;
    cout << "-----------------" << endl;
    Trojkat t = Trojkat(3, 4, 5);
    cout << "Count of Trojkat: " << Trojkat::objectCountTrojkat << endl;
    cout << "Obwod Trojakota: " << t.Obwod() << endl;
    cout << "Pole Trojakota: " << t.Pole() << endl;
    delete p; // to jest destructor prostokąta
    cout << "-----------------" << endl;
    Prostopadl pr = Prostopadl(2, 4, 6);
    cout << "Count of Prostopadl: " << Prostopadl::objectCountProstopadl << endl;
    cout << "Pole powerchni bocznej: " << pr.Obwod() << endl;
    cout << "Pole powerchnie całkowitej: " << pr.Pole() << endl;
    cout << "-----------------" << endl;
    
    
    
    
    
    
//
//
//    Animal* animal = new Animal();
//    animal->speak(); // wywołanie funkcji speak z klasy Animal
//
//    Dog* dog = new Dog();
//    dog->speak(); // wywołanie funkcji speak z klasy Dog
//    dog->speak("hau"); // wywołanie przeciążonej funkcji speak z klasy Dog
    
    return 0;
}
