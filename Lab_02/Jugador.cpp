#include "Jugador.h"
#include <iostream>
#include <string>

using namespace std;

Jugador::Jugador()
{
}

void Jugador::caminar()
{
	cout << "estas camiando"<<endl;
}

void Jugador::aumentarVelocidad()
{
}

void Jugador::vidas()
{
	cout << "tienes 3 vidas"<<endl;
}

void Jugador::numSalud()
{
	std::cout << "tienes 100 puntos de vida" <<std::endl;
}

Jugador::~Jugador()
{
}
