#pragma once
class Jugador
{
private:

	float salud;
	float numVida;
	float posicionX;
	float posicionY;
	float velocidad;

public:
	Jugador();
	void caminar();
	void aumentarVelocidad();
	void vidas();
	void numSalud();
	~Jugador();
};

