#include "Unidad.hpp"
#include <iostream>

using namespace std;

class Guerrero : public Unidad{

private:
    int fuerza;
public:
    Guerrero();
    Guerrero(int vida, int ataque, int nivel, int fuerza);
    int getFuerza() const;
    void setFuerza(int fuerza);
    int calculaAtaque(Unidad& objetivo);
    void recibeAtaque(int ptosAtaque);
    void imprimir();

};
