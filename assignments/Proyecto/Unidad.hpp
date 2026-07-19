#include <iostream>
#pragma once

using namespace std;

class Unidad{
    private:
    int vida;
    int salud;
    int ataque;
    int nivel;

    public:
    Unidad();
    Unidad(int vida, int ataque, int nivel);
    void setVida(int vida);
    int getVida() const;
    void setSalud(int salud);
    int getSalud() const;
    void setAtaque(int ataque);
    int getAtaque() const;
    void setNivel(int nivel);
    int getNivel() const;
    int porcentajeSalud() const;
    void imprimeBarra();
    virtual int calculaAtaque(Unidad& objetivo);
    virtual void recibeAtaque(int ptosAtaque);
    void atacar(Unidad& objetivo);
    virtual void imprimir(ostream& os) const;
    friend ostream& operator<<(ostream& os, const Unidad& u);
    virtual void revive() = 0;
    virtual ~Unidad() = default;
};
