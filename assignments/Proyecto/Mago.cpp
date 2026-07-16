#include "Mago.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Mago::Mago() : Unidad(){
    mana = 100;
}

Mago::Mago(int vida, int ataque, int nivel, int mana) : Unidad(vida, ataque, nivel){
    this->mana = mana;
}

int Mago::getMana(){
    return mana;
}

void Mago::setMana(int mana){
    this->mana = mana;
}

int Mago::calculaAtaque(Unidad& objetivo){
    int dano = Unidad::calculaAtaque(objetivo);

    if(mana >= 20){
        int prob = rand()%100+1;

        if(prob <= mana){

            dano += dano/2;

            mana -= 20;

            cout << "¡Hechizo especial!" << endl;
        }
    }
    return dano;
}

void Mago::recibeAtaque(int ptosAtaque){

    if(getNivel() >= 4 && mana >= 80){
        ptosAtaque /= 3;
    }
    else if(getNivel() >= 3 && mana >= 60){
        ptosAtaque /= 2;
    }
    Unidad::recibeAtaque(ptosAtaque);
}

void Mago::imprimir(){
    Unidad::imprimir();
    cout << "Mana: " << mana << endl;
    cout << " " << endl;
}