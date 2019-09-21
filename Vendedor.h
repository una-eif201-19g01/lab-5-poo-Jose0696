#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Trabajador.h"

class Vendedor:public Trabajador
{
private:
    float comision;
    int ventas;

public:
	Vendedor();
	Vendedor(string, int, float, int, float, int);

	float getComision();
	int getVentas();

	void setComision(float);
	void setVentas(int);

	float salarioBruto();

	string toString();
};

#endif // VENDEDOR_H
