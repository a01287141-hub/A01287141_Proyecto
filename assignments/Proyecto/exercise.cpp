#include <iostream>
#include <vector>
#include <cstdlib> // librería para randomizer
#include <ctime> // randomizar diferentes números en cada ejecución
#include "Unidad.hpp"
#include "Guerrero.hpp"
#include "Arquero.hpp"
#include "Mago.hpp"

using namespace std;

int main() {

    srand(time(nullptr));

    vector<Unidad*> ejercito;

    ejercito.push_back(new Guerrero(120, 30, 3, 20));
    ejercito.push_back(new Arquero(90, 25, 2, 80));
    ejercito.push_back(new Mago(80, 35, 4, 100));

    cout << "Personajes existentes" << endl;

    for (Unidad* personaje : ejercito) {
        cout << *personaje << endl;
    }

    cout << "Batallas" << endl;

    cout << "Guerrero ataca al Arquero" << endl;
    ejercito[0]->atacar(*ejercito[1]);

    cout << "Estado del Arquero:" <<endl;
    cout << *ejercito[1] << endl;

    cout << "Guerrero ataca al Mago" << endl;
    ejercito[0]->atacar(*ejercito[2]);

    cout << "Estado del Mago:" << endl;
    cout << *ejercito[2] << endl;

    cout << "Arquero ataca al Guerrero" << endl;
    ejercito[1]->atacar(*ejercito[0]);

    cout << "Estado del Guerrero:" << endl;
    cout << *ejercito[0] << endl;

    cout << "Mago ataca al Guerrero" << endl;
    ejercito[2]->atacar(*ejercito[0]);

    cout << "Estado del Guerrero:" << endl;
    cout << *ejercito[0] << endl;

    cout << "-----Status-----" << endl;

    for (Unidad* personaje : ejercito) {
        cout << *personaje << endl;
    }

    for (Unidad* personaje : ejercito) {
        delete personaje;
    }

    return 0;
}