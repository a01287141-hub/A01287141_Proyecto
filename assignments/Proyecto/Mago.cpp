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

int Mago::getMana() const{
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

    if(getSalud()==0){
        revive();
    }
    
}

void Mago::revive(){

    if(getSalud() == 0 && mana >= 50){

        cout<<"El Mago revivió (-50 de maná)." << endl;

        setSalud(getVida()/2);

        mana-=50;
    }
    else{

        cout<<"El Mago ha muerto." << endl;
    }
}

void Mago::imprimir(ostream& os) const{

    Unidad::imprimir(os);

    os<<"Mana: "<<mana<<endl;
}