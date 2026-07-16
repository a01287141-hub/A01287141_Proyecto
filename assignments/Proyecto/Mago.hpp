#include "Unidad.hpp"
#include <iostream>

using namespace std;

class Mago : public Unidad {
    private:
        int mana;
    public:
        Mago();
        Mago(int vida, int ataque, int nivel, int mana);
        int getMana();
        void setMana(int mana);
        int calculaAtaque(Unidad& objetivo);
        void recibeAtaque(int ptosAtaque);
        void imprimir();
};