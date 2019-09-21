#include "Vendedor.h"

Vendedor::Vendedor() {
	comision = 0;
	ventas = 0;
}

Vendedor::Vendedor(string ID, int HoraLab, float PreHora, int AnnLab, float comi, int vent) :Trabajador(ID, HoraLab, PreHora, AnnLab) {
	comision = comi;
	ventas = vent;

}

float Vendedor::getComision()
{
	return comision;
}

int Vendedor::getVentas() {
	return ventas;
}

void Vendedor::setComision(float comi) {
	comision = comi;
}

void Vendedor::setVentas(int vent) {
	ventas = vent;
}

float Vendedor::salarioBruto() {
	float pago;
	pago = calcularSalarioBase() + calcularHorasExtra() + calcularAnualidades() + (ventas * comision);
	return pago;
}

string Vendedor::toString()
{
	stringstream pago;
	pago << "El pago es de: " << salarioBruto() << endl;
	return pago.str();
}