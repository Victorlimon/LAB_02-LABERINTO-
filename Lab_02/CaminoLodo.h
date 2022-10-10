#pragma once
#include "Camino.h"
class CaminoLodo :
    public Camino
{
private:
    float velocidad;
public:
    CaminoLodo();
    void disminuirSalud();
    void disminuirVelovidad();
};

