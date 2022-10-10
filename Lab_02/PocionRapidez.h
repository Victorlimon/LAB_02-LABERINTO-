#pragma once
#include "Pociones.h"
class PocionRapidez :
    public Pociones
{
private:
    float incrementoRapidez;
public:
    PocionRapidez();
    void posicionRapidez();
};

