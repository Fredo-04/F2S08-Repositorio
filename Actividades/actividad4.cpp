#include <iostream>
#include <string>
using namespace std;
class Vehiculo {
public:
    void acelerar() {
        cout << "Acelerando el vehículo" << endl;
    }
};

class Coche : public Vehiculo {
public:
    void acelerar() {
        cout << "Acelerando el coche" << endl;
    }

    void encenderLuces() {
        cout << "Luces del coche encendidas" << endl;
    }
};

class Motocicleta : public Vehiculo {
public:
    void acelerar() {
        cout << "Acelerando la motocicleta" << endl;
    }
};

int main() {
    Coche coche;
    Motocicleta motocicleta;

    coche.acelerar();
    motocicleta.acelerar();

    coche.encenderLuces();

    return 0;
}