#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Trabajador.h"

class Vendedor:public Trabajador
{
    private:
        float comision;
        int ventas;
};

#endif // VENDEDOR_H
