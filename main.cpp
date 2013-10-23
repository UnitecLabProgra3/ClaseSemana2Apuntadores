#include <iostream>
using namespace std;

#include "Jugador.h"
#include "Enemigo.h"

int main()
{
    Jugador*jugador=new Jugador(100);
    Enemigo*enemigo_a=new Enemigo(jugador);
    Enemigo*enemigo_b=new Enemigo(jugador);

    cout<<"Direccion de memoria del jugador: "<<enemigo_a->jugador<<endl;
    cout<<"Direccion de memoria del jugador: "<<jugador<<endl;

    cout<<"HP antes del ataque: "<<jugador->hp<<endl;

    enemigo_a->atacar();

    cout<<"HP despues del ataque: "<<jugador->hp<<endl;

    return 0;
}
