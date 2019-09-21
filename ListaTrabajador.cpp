#include "ListaTrabajador.h"

ListaTrabajador::ListaTrabajador() {
	primero = nullptr;
	actual = nullptr;
}

ListaTrabajador::~ListaTrabajador() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void ListaTrabajador::insertarInicio(const Trabajador& _profesor) {
	actual = new Nodo(_profesor, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void ListaTrabajador::insertarFinal(const Trabajador& _profesor) {
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_profesor, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_profesor, nullptr));
	}
}

bool ListaTrabajador::eliminarInicio() {
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

int ListaTrabajador::totalNodos() {
	int totalNodos = 0;
	actual = primero;

	while (actual != nullptr) {
		totalNodos++;
		actual = actual->getSiguiente();
	}

	return totalNodos;
}

bool ListaTrabajador::listaVacia() {
	return primero == nullptr;
}

std::string ListaTrabajador::toString() {
	std::string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

Nodo* ListaTrabajador::getPrimero() const {
	return primero;
}

void ListaTrabajador::setPrimero(Nodo* primero) {
	ListaTrabajador::primero = primero;
}

Nodo* ListaTrabajador::getActual() const {
	return actual;
}

void ListaTrabajador::setActual(Nodo* actual) {
	ListaTrabajador::actual = actual;
}