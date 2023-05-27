#include <iostream>
using namespace std;

class Reproductor {
public:
    virtual void reproducir() = 0;
    virtual void pausar() = 0;
    virtual void detener() = 0;
    virtual ~Reproductor() {}
};

class ReproductorMP3 : public Reproductor {
public:
    void reproducir() {
        cout << "Reproduciendo archivo MP3" << endl;
    }

    void pausar() {
        cout << "Pausando archivo MP3" << endl;
    }

    void detener() {
        cout << "Deteniendo archivo MP3" << endl;
    }
};

int main() {
    ReproductorMP3 reproductorMP3;

    reproductorMP3.reproducir();
    reproductorMP3.pausar();
    reproductorMP3.detener();

    return 0;
}
