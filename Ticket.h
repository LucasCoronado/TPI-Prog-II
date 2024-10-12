#pragma once
#include "Cliente.h"
#include "Responsable.h"
#include "Fecha.h"



class Ticket
{
public:
	Ticket();
	~Ticket();


private:

	int _id;
	char _descripcion[100];
	char _prioridad[10];  // Puede ser "Alta", "Media", "Baja"
	char _estado[15];     // Puede ser "Pendiente", "En Progreso","Resuelto", "Cerrado"
	//Cliente _cliente;
	//Responsable _responsable;
	Fecha _fechaCreacion;
};
