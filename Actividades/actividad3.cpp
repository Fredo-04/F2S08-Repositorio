#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
    virtual void hacerSonido() {
        cout << "sonido" << endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "guau\n";
    }
};

class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "miau\n";
    }
};

class Vaca : public Animal {
public:
    void hacerSonido() override {
        cout << "muu\n";
    }
};

int main() {
    Perro perro;
    Gato gato;
    Vaca vaca;

    perro.hacerSonido();
    gato.hacerSonido();
    vaca.hacerSonido();

    return 0;
}