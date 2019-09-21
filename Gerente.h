#ifndef GERENTE_H
#define GERENTE_H
#include "Trabajador.h"

class Gerente:public Trabajador
{
private:
	float bono;

public:
	Gerente();
	Gerente(string, int, float, int, float);

	float getBono();
	void setBono(float);

	float SalarioBruto();
	string toString();
};

#endif // GERENTE_H
