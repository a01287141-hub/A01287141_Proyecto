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
    int calculaAtaque(Unidad& objetivo) override;
    void recibeAtaque(int ptosAtaque) override;
    void imprimir(ostream& os) const override;
    void revive() override;
};
