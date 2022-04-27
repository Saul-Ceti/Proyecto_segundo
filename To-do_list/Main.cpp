//Librerias
#include <iostream>
#include <vector>

//Conxiones internas
#include "LogicaLista.h"
#include "MenuPrincipal.h"

int main()
{
	string tarea;

	std::cout << "//////////////////////////////////////////////////////TO-DO LIST//////////////////////////////////////////////////////" << std::endl;
	std::cout << "\t\t\t\t\tComienza a organizar tus tareas diariamente :)" << std::endl;
	std::cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;

	MenuPrincipal a(tarea);
	a.Menu();

	system("pause");
	return 0;
}