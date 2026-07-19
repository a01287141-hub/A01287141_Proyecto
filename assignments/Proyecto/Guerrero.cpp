#include "Guerrero.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Guerrero::Guerrero() : Unidad(){
    fuerza = 10;
}

Guerrero::Guerrero(int vida, int ataque, int nivel, int fuerza)
: Unidad(vida, ataque, nivel){
    this->fuerza = fuerza;
}

int Guerrero::getFuerza() const{
    return fuerza;
}

void Guerrero::setFuerza(int fuerza){
    this->fuerza = fuerza;
}

int Guerrero::calculaAtaque(Unidad& objetivo){
    int dano = Unidad::calculaAtaque(objetivo);
    dano += fuerza;
    return dano;
}

void Guerrero::recibeAtaque(int ptosAtaque){
    ptosAtaque -= fuerza/3;

    if(ptosAtaque < 1)
        ptosAtaque = 1;
    Unidad::recibeAtaque(ptosAtaque);
}

void Guerrero::revive(){

    if(getSalud() == 0 && fuerza >= 20){

        cout << "El Guerrero revive (-20 de fuerza)." << endl;

        setSalud(getVida()/2);

        fuerza -= 20;
    }
    else{

        cout << "El Guerrero ha muerto." << endl;
    }
}

void Guerrero::imprimir(ostream& os) const{

    Unidad::imprimir(os);

    os<<"Fuerza: "<<fuerza<<endl;
}