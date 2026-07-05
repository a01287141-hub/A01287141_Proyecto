#include "Unidad.hpp"

using namespace std;

Unidad::Unidad() {
    vida = 100;
    salud = 100;
    ataque = 20;
    nivel = 1;
}

Unidad::Unidad(int vida, int ataque, int nivel) {
    this->vida=vida;
    this->ataque=ataque;
    this->nivel=nivel;
}

int Unidad::getVida(){
    return vida;
}

int Unidad::getAtaque(){
    return ataque;
}

int Unidad::getNivel(){
    return nivel;
}

int Unidad::getSalud(){
    return salud;
}

void Unidad::setVida(int vida){
    this->vida=vida;
    if (salud>vida){
        salud=vida;
    }
}

void Unidad::setSalud(int salud){
    if (salud < 0)
        this->salud = 0;
    else if (salud > vida)
        this->salud = vida;
    else
        this->salud = salud;
}

void Unidad::setAtaque(int ataque){
    this->ataque=ataque;
}

void Unidad::setNivel(int nivel){
    this->nivel=nivel;
}

int Unidad::porcentajeSalud(){
    int porcentaje = 0;
    porcentaje = (salud*100)/vida;
    return porcentaje;
}

void Unidad::imprimeBarra(){
    int porcentaje = porcentajeSalud();
    int barras = porcentaje/5;

    for (int i = 0; i < barras;i++){
        cout<<"%";
    }

    for (int i = barras; i < 20; i++){
        cout<<"=";
    }

    cout<<endl;
}

