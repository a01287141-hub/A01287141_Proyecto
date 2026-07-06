#include <iostream>
#include <cstdlib> // librería para randomizer
#include <ctime> // randomizar diferentes números en cada ejecución
#include "Unidad.hpp"

using namespace std;

int main() {

    srand(time(nullptr));

    Unidad caballero(120,30,3);
    Unidad arquero(90,20,2);

    cout << "===== ESTADO INICIAL =====" << endl;

    cout << "Caballero" << endl;
    caballero.imprimir();

    cout << endl;

    cout << "Arquero" << endl;
    arquero.imprimir();

    cout << "El caballero ataca al arquero." << endl;
    caballero.atacar(arquero);

    cout << "Arquero despues del ataque:" << endl;
    arquero.imprimir();

    cout << "El arquero ataca al caballero." << endl;
    arquero.atacar(caballero);

    cout << "Caballero despues del ataque:" << endl;
    caballero.imprimir();

    return 0;
}