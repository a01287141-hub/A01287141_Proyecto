#include <iostream>
#include <cstdlib> // librería para randomizer
#include <ctime> // randomizar diferentes números en cada ejecución
#include "Unidad.hpp"
#include "Guerrero.hpp"
#include "Arquero.hpp"
#include "Mago.hpp"

using namespace std;

int main() {

    srand(time(nullptr));

    Guerrero guerrero(120,30,3,10);
    Arquero arquero(90,20,2,35);
    Mago mago(80,25,4,100);
    
    guerrero.imprimir();
    arquero.imprimir();
    mago.imprimir();
    cout << "El guerrero ataca al mago" << endl;
    guerrero.atacar(mago);
    
    cout << "El arquero ataca al guerrero" << endl;
    arquero.atacar(guerrero);
    
    cout << "El mago ataca al arquero" << endl;
    mago.atacar(arquero);
    
    cout << "Estados finales" << endl;
    
    guerrero.imprimir();
    arquero.imprimir();
    mago.imprimir();

    return 0;
}