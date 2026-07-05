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
    Unidad(int vida, int ataque, int nivel);
    void setVida(int vida);
    int getVida();
    void setSalud(int salud);
    int getSalud();
    void setAtaque(int ataque);
    int getAtaque();
    void setNivel(int nivel);
    int getNivel();
    int porcentajeSalud();
    void imprimeBarra();
    int calculaAtaque(Unidad& objetivo);
    void recibeAtaque(int ptosAtaque);
    void atacar(Unidad& objetivo);
    void imprimir();
};
