#include "Unidad.hpp"
#include <iostream>

using namespace std;

class Mago : public Unidad {
    private:
        int mana;
    public:
        Mago();
        Mago(int vida, int ataque, int nivel, int mana);
        int getMana() const;
        void setMana(int mana);
        int calculaAtaque(Unidad& objetivo) override;
        void recibeAtaque(int ptosAtaque) override;
        void imprimir(ostream& os) const override;
        void revive() override;
};