#include "Nodo.h"

Nodo::Nodo() {
	siguiente = NULL;
}

Nodo::Nodo(const Trabajador& trab, Nodo* siguiente) : trab(trab), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Trabajador& Nodo::getTrabajador() const {
	return trab;
}

void Nodo::setTrabajador(const Trabajador& trab) {
	Nodo::trab = trab;
}

Nodo* Nodo::getSiguiente() const {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
	return trab.toString();
}