#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>

using namespace std;
class Trabajador
{
    public:
        virtual float calcularSalarioBase();
        virtual float calcularHorasExtra();
        virtual float calcularAnualidades();
        virtual float calcularSalarioBruto();
        virtual float calcularCargas();
        virtual float calcularSalarioNeto();

    private:
        string id;
        int horasLab;
        float precioHora;
        int annosLaborados;
};

#endif // TRABAJADOR_H
