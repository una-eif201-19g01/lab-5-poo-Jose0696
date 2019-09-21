#include "Nodo.h"

class ListaTrabajador
{
	Nodo* primero;
	Nodo* actual;

public:
	ListaTrabajador();

	virtual ~ListaTrabajador();

	void insertarInicio(const Trabajador& _trab);
	void insertarFinal(const Trabajador& _trab);
	bool eliminarInicio();
	int totalNodos();
	bool listaVacia();

	Nodo* getPrimero() const;

	void setPrimero(Nodo* primero);

	Nodo* getActual() const;

	void setActual(Nodo* actual);

	string toString();

};
