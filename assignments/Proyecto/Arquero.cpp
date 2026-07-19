#include "Arquero.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Arquero::Arquero() : Unidad(){
    precision = 25;
}

Arquero::Arquero(int vida, int ataque, int nivel, int precision) : Unidad (vida, ataque, nivel){
    this->precision = precision;
}

int Arquero::getPrecision() const{
    return precision;
}

void Arquero::setPrecision(int precision){
    this->precision = precision;
}

int Arquero::calculaAtaque(Unidad& objetivo){
    int dano = Unidad::calculaAtaque(objetivo);

    int prob = rand()%100+1; // de la librería de Unidad.cpp

    if(prob <= precision){

        dano *= 2;

        cout << "¡Golpe crítico!" << endl;
    }
    return dano;
}

void Arquero::recibeAtaque(int ptosAtaque) {

    Unidad::recibeAtaque(ptosAtaque);

    if (getSalud() == 0) {
        revive();
    }
}

void Arquero::imprimir(ostream& os) const{

    Unidad::imprimir(os);

    os<<"Precision: "<<precision<<endl;
}

void Arquero::revive(){

    if(getSalud() == 0 && precision >= 80){

        cout << "El Arquero ha revivido ( -40 de precisión)." << endl;

        setSalud(getVida()/3);

        precision-=40;
    }
    else{

        cout<<"El Arquero ha muerto." << endl;
    }
}