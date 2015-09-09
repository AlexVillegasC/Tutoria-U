#pragma once
#include <sstream>
#include "Fecha.h"
#include "Nombre.h"
class Persona
{
protected: 
	Nombre nombreCompleto;
	int edad;
	string cedula;
public:

	Persona()
	{
		this->edad = 0;
		this->cedula = "";
	}
	Persona(Nombre nombreCompleto, int edad, string cedula){
		this->nombreCompleto = nombreCompleto;
		this->cedula = cedula;
		this->edad = edad;
	}
	//setter
	void setNombreCompleto(Nombre nombreCompleto){
		this->nombreCompleto = nombreCompleto;
	}
	void setEdad(int edad){
		this->edad = edad;
	}
	void setCedula(string cedula){
		this->cedula = cedula;
	}
	//getter
	Nombre getNombreCompleto(){
		return nombreCompleto;
	}
	int getEdad(){
		return edad;
	}
	string getCedula(){
		return cedula;
	}
	virtual string const toString(){
		return "";
	}

};

