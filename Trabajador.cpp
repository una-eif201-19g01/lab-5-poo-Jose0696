#include "Trabajador.h"

float Trabajador::calcularSalarioBase() {
	float salarioBase;
	salarioBase = precioHora * 48;
	return salarioBase;
}
float Trabajador::calcularHorasExtra() {
	float Extra;
	float precio;
	int con = horasLab - 48;
	if (con > 0) {
		precio = precioHora * 0.5;
		Extra = precio;
	}
	else {
		Extra = 0;
	}
	return Extra;
}
float Trabajador::calcularAnualidades() {
	float pagoAnio;
	pagoAnio = calcularSalarioBase() * (0.5 * annosLaborados);
	return pagoAnio;
}
float Trabajador::calcularSalarioBruto() {
	float salarioBruto;
	salarioBruto = (calcularSalarioBase() + calcularHorasExtra() + calcularAnualidades());
	return salarioBruto;
}
float Trabajador::calcularCargas() {
	float cargas;
	cargas = calcularSalarioBruto() * 0.9;
	return cargas;
}
float Trabajador::calcularSalarioNeto() {
	float neto;
	neto = calcularSalarioBruto() - calcularCargas();
	return neto;
}

Trabajador::Trabajador() {
	id = "";
	horasLab = 0;
	precioHora = 0;
	annosLaborados = 0;
}

Trabajador::Trabajador(string ID, int HoLab, float PreHora, int AnnLab) {
	id = ID;
	horasLab = HoLab;
	precioHora = PreHora;
	annosLaborados = AnnLab;

}

void Trabajador::setId(string ID) {
	id = ID;
}

void Trabajador::setHorasLab(int HoLab) {
	horasLab = HoLab;

}

void Trabajador::setPrecioHora(float PreHora) {
	precioHora = PreHora;

}

void Trabajador::setAnnosLab(int AnnLab) {
	annosLaborados = AnnLab;
}

string Trabajador::getId() {
	return id;
}

int Trabajador::getHorasLab() {
	return horasLab;
}

float Trabajador::getPrecioHora() {
	return precioHora;
}

int Trabajador::getAnnosLab() {
	return annosLaborados;
}

string Trabajador::toString() {
	stringstream reporte;
	reporte << "El salario base es de: " << calcularSalarioBase() << endl;
	reporte << "El salario bruto es de: " << calcularSalarioBruto() << endl;
	reporte << "El salario neto es de: " << calcularSalarioNeto() << endl;
	return reporte.str();
}
