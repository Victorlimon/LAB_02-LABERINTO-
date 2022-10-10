#pragma once
#include "Camino.h"
class CaminoRapido :
    public Camino
{
private:
    float velocidad;
public:
    void aumentarVelocidad();
};

