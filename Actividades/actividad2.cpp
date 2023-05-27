#include <iostream>
using namespace std;

class Forma {
public:
    virtual float calcularPerimetro() = 0;
};

class Circulo : public Forma {
private:
    float radio;
public:
    Circulo(float radio) : radio(radio) {}

    float calcularPerimetro() {
        return 2 * radio;
    }
};

class Rectangulo : public Forma {
private:
    float base, altura;
public:
    Rectangulo(float base, float altura) : base(base), altura(altura) {}

    float calcularPerimetro() {
        return 2 * (base + altura);
    }
};

class Triangulo : public Forma {
private:
    float lado1, lado2, lado3;
public:
    Triangulo(float lado1, float lado2, float lado3) : lado1(lado1), lado2(lado2), lado3(lado3) {}

    float calcularPerimetro() {
        return lado1 + lado2 + lado3;
    }
};

int main() {
    int opcion;
    cout << "Seleccione una forma:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Ingrese la opción deseada: ";
    cin >> opcion;

    Forma* forma;

    if (opcion == 1) {
        float radio;
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;
        forma = new Circulo(radio);
    } else if (opcion == 2) {
        float base, altura;
        cout << "Ingrese la base del rectangulo: ";
        cin >> base;
        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;
        forma = new Rectangulo(base, altura);
    } else if (opcion == 3) {
        float lado1, lado2, lado3;
        cout << "Ingrese el lado 1 del triangulo: ";
        cin >> lado1;
        cout << "Ingrese el lado 2 del triangulo: ";
        cin >> lado2;
        cout << "Ingrese el lado 3 del triangulo: ";
        cin >> lado3;
        forma = new Triangulo(lado1, lado2, lado3);
    } else {
        cout << "Opción invalida." << endl;
        return 0;
    }

    float perimetro = forma->calcularPerimetro();
    cout << "El perimetro de la forma seleccionada es: " << perimetro << endl;

    return 0;
}
