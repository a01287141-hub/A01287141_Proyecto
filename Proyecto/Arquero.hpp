#include "Unidad.hpp"
#include <iostream>

using namespace std;

class Arquero : public Unidad {
    private:
        int precision;
    public:
        Arquero();
        Arquero(int vida, int ataque, int nivel, int precision);
        int getPrecision();
        void setPrecision(int precision);
        int calculaAtaque(Unidad& objetivo);
        void imprimir();
};