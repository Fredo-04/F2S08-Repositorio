#include <iostream>
using namespace std;

class Empleado {
public:
    virtual double calcularSalario() = 0;
};

class EmpleadoTiempoCompleto : public Empleado {
public:
    double calcularSalario() {
        double salario = 5000.0; 
        return salario;
    }
};

class EmpleadoMedioTiempo : public Empleado {
public:
    double calcularSalario() {
        double salario = 2500.0; 
        return salario;
    }
};

int main() {
    EmpleadoTiempoCompleto empleadoTiempoCompleto;
    EmpleadoMedioTiempo empleadoMedioTiempo;

    cout << "Salario de empleado a tiempo completo: S/." << empleadoTiempoCompleto.calcularSalario() << endl;
    cout << "Salario de empleado a medio tiempo: S/." << empleadoMedioTiempo.calcularSalario() << endl;

    return 0;
}
