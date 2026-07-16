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

int Arquero::getPrecision(){
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

void Arquero::imprimir(){
    Unidad::imprimir();

    cout << "Precision: " << precision << "%" << endl;
    cout << " " << endl;
}