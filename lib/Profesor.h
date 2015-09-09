#pragma once
#include "Persona.h"
#include <sstream>
#include <iostream>
class Profesor :
	public Persona
{
private:
	Nombre nombreCompleto;
	Fecha fechaContratacion;
	float salario;
public:

	Profesor()
	{
		this->cedula="";
		this->salario = 0;
	}
	Profesor(string cedula, Nombre nombreCompleto,Fecha fechaContratacion, float salario){
		this->cedula = cedula;
		this->nombreCompleto = nombreCompleto;
		this->fechaContratacion = fechaContratacion;
		this->salario = salario;
	}
	//setter


	~Profesor()
	{
	}
};

