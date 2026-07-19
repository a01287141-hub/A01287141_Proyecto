#include "Unidad.hpp"
#include <iostream>

using namespace std;

class Arquero : public Unidad {
    private:
        int precision;
    public:
        Arquero();
        Arquero(int vida, int ataque, int nivel, int precision);
        int getPrecision() const;
        void setPrecision(int precision);
        int calculaAtaque(Unidad& objetivo) override;
        void recibeAtaque(int ptosAtaque) override;
        void imprimir(ostream& os) const override;
        void revive() override;
};