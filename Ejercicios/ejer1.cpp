#include <iostream>
using namespace std;
//clase abstracta base para las figuras
class Figura {
public:
    //metodos virtuales puros que seran utilizados por las clases derivadas
    virtual void dibujar() = 0;
    virtual float calcularArea() = 0;
};
//creacion de clases derivadas
//cada una varia en el apartado de "dibujar", en donde dependiendo de la figura cambiará el cout
//en "calculararea" cambia completamente debido a la formula y a los parametros que se ingreso 
//      en el constructor de la clase derivada, ya que algunos tienen 1 parametro mientras otros tiene 2
class Circulo : public Figura {
private:
    float radio;
public:
    Circulo(float radio) : radio(radio) {}

    void dibujar() {
        cout << "Dibujando un circulo" << endl;
    }

    float calcularArea() {
        return radio * radio;
    }
};

class Rectangulo : public Figura {
private:
    float base, altura;
public:
    Rectangulo(float base, float altura) : base(base), altura(altura) {}

    void dibujar() {
        cout << "Dibujando un rectangulo" << endl;
    }

    float calcularArea() {
        return base * altura;
    }
};

class Triangulo : public Figura {
private:
    float base, altura;
public:
    Triangulo(float base, float altura) : base(base), altura(altura) {}

    void dibujar() {
        cout << "Dibujando un triangulo" << endl;
    }

    float calcularArea() {
        return (base * altura) / 2.0;
    }
};
//main para visualizar todas las funciones desarrolladas
int main() {
    Circulo circulo(5.0);
    Rectangulo rectangulo(4.0, 3.0);
    Triangulo triangulo(5.0, 2.0);

    circulo.dibujar();
    cout << "Area del circulo: " << circulo.calcularArea() << endl;

    rectangulo.dibujar();
    cout << "Area del rectangulo: " << rectangulo.calcularArea() << endl;

    triangulo.dibujar();
    cout << "Area del triangulo: " << triangulo.calcularArea() << endl;

    return 0;
}
