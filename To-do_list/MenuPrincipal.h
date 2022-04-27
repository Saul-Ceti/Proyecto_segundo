#pragma once

#include <iostream>
#include <stdlib.h>

#include "LogicaLista.h"

class MenuPrincipal : public Add
{
	public:
		MenuPrincipal() {}
		~MenuPrincipal() {}

		MenuPrincipal(string _homework) : Add(_homework) {}

	void Menu()
	{
		//Variables
		string nombreTarea, fechaTarea, tareaBorrada;
		int OpcionMenu = 0;
			
		ptrPila p = NULL;

		while (OpcionMenu != 5)
		{
			std::cout << "Menu principal////////////////////////////////////////////////" << std::endl;
			std::cout << "**************************************************************" << std::endl;
			std::cout << "1.Agregar una nueva tarea" << std::endl;
			std::cout << "2.Eliminar la ultima tarea agregada" << std::endl;
			std::cout << "3.Mostrar las tareas" << std::endl;
			std::cout << "4.Salir" << std::endl;
			std::cout << "--------------------------------------------------------------" << std::endl;
			std::cout << "Seleccione la opcion que desee: "; std::cin >> OpcionMenu;
			std::cout << "**************************************************************" << std::endl;

			switch (OpcionMenu)
			{
				//Opcion 1: Agregar tareas a la lista
				case 1:
					std::cout << "Agregar una tarea                                   |Opcion 1|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					//////////////////////////////////////////////////////////////////////////////////////////
					std::cout << "Escriba el nombre de la tarea (No poner espacios, una palabra)" << std::endl;
					std::cout << "--------------------------------------------------------------" << std::endl;
					std::cin >> nombreTarea;
					std::cout << "**************************************************************" << std::endl;
					
					/*std::cout << "Escriba la fecha limite de la tarea (formato 'mm/dd/aaaa')" << std::endl;
					std::cout << "--------------------------------------------------------------" << std::endl;
					std::cin >> fechaTarea;				
					std::cout << "**************************************************************" << std::endl;*/
					
					agregarTarea(p, nombreTarea, fechaTarea);
					std::cout << "La tarea llamada '" << nombreTarea << "' fue agregada" << std::endl;
					std::cout << "--------------------------------------------------------------" << std::endl;
					//////////////////////////////////////////////////////////////////////////////////////////
					std::cout << "                                        |Final de la opcion 1|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					break;
				
				//Opcion 2: Borrar tareas existentes de la lista
				case 2:
					std::cout << "Eliminar una tarea                                  |Opcion 2|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					//////////////////////////////////////////////////////////////////////////////////////////
					tareaBorrada = eliminarTarea(p);
					std::cout << "Tarea '" << tareaBorrada << "' eliminado\n\n" << std::endl;
					//////////////////////////////////////////////////////////////////////////////////////////
					std::cout << "                                        |Final de la opcion 2|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					break;
				/*
				//Opcion 3: Cambiar el estatus de las tareas en la lista
				case 3:
					std::cout << "Cambiar el estatus de una tarea                     |Opcion 3|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					//////////////////////////////////////////////////////////////////////////////////////////
					
					//////////////////////////////////////////////////////////////////////////////////////////
					std::cout << "                                        |Final de la opcion 3|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					break;
				*/

				//Opcion 3: Mostrar las tareas
				case 3:
					std::cout << "Mostrar las tareas                                  |Opcion 3|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					//////////////////////////////////////////////////////////////////////////////////////////
					std::cout << "Tareas pendientes" << std::endl;
					std::cout << "--------------------------------------------------------------" << std::endl;
					
					if (p != NULL)
						mostrarTareas(p);
					else
						std::cout << "No hay elementos" << std::endl;

					/*std::cout << "Tareas terminadas" << std::endl;
					std::cout << "--------------------------------------------------------------" << std::endl;*/
					//////////////////////////////////////////////////////////////////////////////////////////
					std::cout << "                                        |Final de la opcion 3|" << std::endl;
					std::cout << "**************************************************************" << std::endl;
					break;

				//Opcion 4: Final del programa
				case 4:
					std::cout << "Saliendo del programa, gracias por usarlo..." << std::endl;
					std::cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;
					std::cout << "////////////////////////////////////////////////////////ADIOS/////////////////////////////////////////////////////////" << std::endl;
					std::cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;
					break;

				default: 
					std::cout << "Esa opcion no existe, elige una que si sea valida: " << std::endl;
			}
		}
	}
};