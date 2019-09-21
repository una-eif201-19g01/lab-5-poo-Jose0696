#include "Trabajador.h"

class Nodo
{
	Trabajador trab;
	Nodo* siguiente;

public:
	Nodo();
	Nodo(const Trabajador& trab, Nodo* siguiente);
	virtual ~Nodo();
	const Trabajador& getTrabajador() const;
	void setTrabajador(const Trabajador& trab);
	Nodo* getSiguiente()const;
	void setSiguiente(Nodo* _siguiente);
	string toString();
};
