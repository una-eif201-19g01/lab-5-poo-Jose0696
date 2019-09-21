#include "Gerente.h"

Gerente::Gerente() {
	bono = 0;
}

Gerente::Gerente(string ID, int HoraLab, float PreHora, int AnnLab, float bon) :Trabajador(ID, HoraLab, PreHora, AnnLab) {
	bono = bon;
}

float Gerente::getBono() {
	return bono;
}

void Gerente::setBono(float bon) {
	bono = bon;
}

float Gerente::SalarioBruto() {
	return calcularSalarioBruto() + bono;
}

string Gerente::toString() {
	stringstream bruto;
	bruto << "El bono especial es " << SalarioBruto() << endl;
	return bruto.str();
}