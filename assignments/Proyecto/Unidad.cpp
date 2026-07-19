#include "Unidad.hpp"
#include <cstdlib> //librería para randomizer

using namespace std;

Unidad::Unidad() {
    vida = 100;
    salud = 100;
    ataque = 20;
    nivel = 1;
}

Unidad::Unidad(int vida, int ataque, int nivel) {
    this->vida=vida;
    this->salud=vida;
    this->ataque=ataque;
    this->nivel=nivel;
}

int Unidad::getVida() const{
    return vida;
}

int Unidad::getAtaque() const{
    return ataque;
}

int Unidad::getNivel() const{
    return nivel;
}

int Unidad::getSalud() const{
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

int Unidad::porcentajeSalud() const{
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

int Unidad::calculaAtaque(Unidad& objetivo){
    int mitad = ataque / 2;

    if (mitad < 1)
        mitad = 1;

    if (objetivo.getNivel() > nivel) {
        return (rand()%mitad) + 1;
    } else {
        return rand()%(ataque - mitad + 1) + mitad;
    }
}

void Unidad::recibeAtaque(int ptosAtaque){
    salud -= ptosAtaque;
    if (salud<0){
        salud=0;
    }
}

void Unidad::atacar(Unidad& objetivo){
    int danoAtaque = calculaAtaque(objetivo);

    objetivo.recibeAtaque(danoAtaque);
}

void Unidad::imprimir(ostream& os) const {

    cout << "Vida maxima : " << vida << endl;
    cout << "Salud actual: " << salud << endl;
    cout << "Ataque      : " << ataque << endl;
    cout << "Nivel       : " << nivel << endl;
    cout << "Porcentaje de salud : " << porcentajeSalud() << "%" << endl;
    cout << "Barra       : ";

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

ostream& operator<<(ostream& os, const Unidad& u){

    u.imprimir(os);

    return os;
}