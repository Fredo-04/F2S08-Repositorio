#include <iostream>
#include <string>
using namespace std;
class Figura {
public:
    virtual float calcularArea(){return 0.0;};
    virtual ~Figura() = default;
};

class Circulo : public Figura {
private:
    float radio;
public:
    Circulo(float radio){this->radio=radio;};
    float calcularArea(){return radio*radio;};
};

class Rectangulo : public Figura {
private:
    float base, altura;
public:
    Rectangulo(float base, float altura):base(base),altura(altura){};
    float calcularArea(){return base*altura;};
};

class Triangulo : public Figura {
private:
    float base, altura;
public:
    Triangulo(float _b, float _a){base=_b;altura=_a;};
    float calcularArea(){return base*altura/2;};
};

class Cuadrado : public Figura {
private:
    float lado;
public:
    Cuadrado(float lado):lado(lado){};
    float calcularArea(){return lado*lado;};
};

class Pentagono : public Figura {
private:
    float lado, apotema;
public:
    Pentagono(float lado, float apotema){this->lado=lado;this->apotema=apotema;};
    float calcularArea(){return apotema*5*lado/2;};
};
class Menu{
    public:
        Menu(){}
        int opcion;
        float valor1,valor2;
        int mostraropciones(){
            cout << "Menu:" << endl;
            cout << "1. Circulo" << endl;
            cout << "2. Rectangulo" << endl;
            cout << "3. Triangulo" << endl;
            cout << "4. Cuadrado" << endl;
            cout << "5. Pentagono" << endl;
            cout << "0. Salir" << endl;
            cout << "Ingrese la opcion deseada: ";
            cin >> opcion;
            return opcion;
        }
        void circulo(){
            cout << "Ingresa el radio: "; cin >> valor1;
            Circulo c1(valor1);
            cout << "El area del circulo con radio " << valor1 << " es: " << c1.calcularArea();
        }
        void rectangulo(){
            cout << "Ingrese base: "; cin >> valor1;
            cout << "Ingrese altura: "; cin >> valor2;
            Rectangulo r1(valor1,valor2);
            cout << "El area del rectangulo con base " << valor1 << " y altura " << valor2 << " es " << r1.calcularArea();
        }
        void triangulo(){
            cout << "Ingrese base: "; cin >> valor1;
            cout << "Ingrese altura: "; cin >> valor2;
            Triangulo t1(valor1,valor2);
            cout << "El area del triangulo con base " << valor1 << " y altura " << valor2 << " es " << t1.calcularArea();
        }
        void cuadrado(){
            cout << "Ingresa el lado: "; cin >> valor1;
            Cuadrado cd1(valor1);
            cout << "El area del cuadrado con lado " << valor1 << " es: " << cd1.calcularArea();
        }
        void pentagono(){
            cout << "Ingrese lado: "; cin >> valor1;
            cout << "Ingrese apotema: "; cin >> valor2;
            Pentagono p1(valor1,valor2);
            cout << "El area del pentagono con lado " << valor1 << " y apotema " << valor2 << " es " << p1.calcularArea();

        }
};
int main(){
    int op;
    Menu m;
    op = m.mostraropciones();
    while (op<8 && op>0){
        if (op == 1){
            m.circulo();
        }
        else if (op == 2){
            m.rectangulo();
        }
        else if (op == 3){
            m.triangulo();
        }
        else if (op == 4){
            m.cuadrado();
        }
        else if (op == 5){
            m.pentagono();
        }
    }

    return 0;
}