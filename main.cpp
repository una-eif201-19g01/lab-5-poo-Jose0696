#include "ListaTrabajador.h"
#include "Trabajador.h"
#include "Vendedor.h"
#include "Gerente.h"
#include "Secretaria.h"

using namespace std;

int main()
{
	Trabajador trabajador1("001", 48, 3500, 1);
	ListaTrabajador* trab = new ListaTrabajador();
	trab->insertarInicio(trabajador1);
	cout << trab->toString() << endl;

    return 0;
}
