#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Add
{
	private:
		string homework, date;
		bool estado;
		class Add* next;

	public:
		Add() {}
		
		Add(string _homework)
		{
			homework = _homework;
		}

		~Add() {}
		
		typedef Add* ptrPila;


	//Agregar tareas
	void agregarTarea(ptrPila& p, string _homework, string _date)
	{
		ptrPila aux;

		aux = new (class Add); 
		aux->homework = _homework;
		/*aux->date = _date;*/
		aux->next = p;
		
		p = aux;
	}

	//Borrar tareas
	string eliminarTarea(ptrPila& p)
	{
		string homework;
		ptrPila aux;

		aux = p;

		homework = aux->homework;

		p = aux->next;
		
		delete(aux);

		return homework;
	}

	/*
	//Cambiar estatus de tareas
	void cambiarEstatus(ptrPila p) Profe, quiero hablar sobre unas dudas que tengo, se que el vector o el deque solo modifican valores de arriba o abajo de las listas respectivamente
								   pero tiene que haber una manera de poder elegir alguna de las opciones, ya sea destruyedo posiciones y construyendolas de nuevo, le estuve intentando
								   no logre mucho pero minimo me diverti un rato jajajaja, a ver si me apoya con eso
	{
		ptrPila aux;
		
		aux = p;

		while (aux != NULL)
		{
			aux->estado
			aux = aux->next;
		}

	}
	*/

	//Mostrar tareas
	void mostrarTareas(ptrPila p)
	{
		ptrPila aux;
		//Aqui se apunta al comienzo de la lista
		aux = p;

		while (aux != NULL)
		{
			std::cout << aux->homework << endl;
			std::cout << "--------------------------------------------------------------" << std::endl;
			/*std::cout << "---------------------" << aux->date << "--------------------" << endl;*/
			aux = aux->next;
		}
		std::cout << "**************************************************************" << std::endl;
	}
};
