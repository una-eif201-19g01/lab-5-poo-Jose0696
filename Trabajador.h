#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include <string>
#include <sstream>

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
    
    Trabajador();
	Trabajador(string, int, float, int);

	void setId(string);
	void setHorasLab(int);
	void setPrecioHora(float);
	void setAnnosLab(int);

	string getId();
	int getHorasLab();
	float getPrecioHora();
	int getAnnosLab();

	string toString();

private:
    string id;
    int horasLab;
    float precioHora;
    int annosLaborados;
};

#endif // TRABAJADOR_H
