#include <iostream>

using namespace std;

class Unidad{
    private:
    int vida;
    int salud;
    int ataque;
    int nivel;

    public:
    Unidad();
    Unidad(int v, int s, int a, int n);
    void setVida();
    int getVida();
    void setSalud();
    int getSalud();
    void setAtaque();
    int getAtaque();
    void setNivel();
    int getNivel();
    int porcentajeSalud();
    void imprimeBarra();
    int calculaAtaque(Unidad& objetivo);
    void recibeAtaque(int ptosAtaque);
    void atacar(Unidad& objetivo);
    void imprimir();
};
