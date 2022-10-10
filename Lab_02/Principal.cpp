#include <iostream>
#include <string>
#include "Jugador.h"
#include "CaminoOscuro.h"
#include "Pociones.h"
#include "CaminoRapido.h"
#include "PocionRapidez.h"
#include "CaminoLodo.h"

using namespace std;
// Este programa es una simulacion de un videojuego de laberinto donde un jugador tiene que
// pasar por distentos caminos y tendra distintas dificultades, en el camino se encontrara con
// pociones que le brindaran una habilidad
int main()
{
	Jugador* jugador1 = new Jugador();
	CaminoOscuro* Co1 = new CaminoOscuro();
	Pociones* Po1 = new Pociones();
	CaminoRapido* Cr1 = new CaminoRapido();
	PocionRapidez* Pr1 = new PocionRapidez();
	CaminoLodo* Cl1 = new CaminoLodo();
	jugador1->caminar();
	Co1->CeroVisibilidad();
	Po1->Duracion();
	Cr1->aumentarVelocidad();
	Pr1->posicionRapidez();
	Cl1->disminuirSalud();
	return 0;
}