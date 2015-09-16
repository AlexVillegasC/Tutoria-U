#pragma once
#include "Persona.h";

class Estudiante:
	public Persona
{
//atributos
private:
	int grado;

//metodos
public:
	//constructor
	Estudiante(){}


	Estudiante(string nombre, string ap1, string ap2, string ced, int edad, int grado) :Persona(){
								/*Atributos*/
		//miembros
		this->grado = grado;

		//heredados
		this->nombreCompleto = Nombre(nombre, ap1, ap2);
		this->cedula = ced;
		this->edad = edad;
	};

	
	
	string const toString(){
		stringstream str = stringstream();
		str << this->nombreCompleto.toString();
		str << "  ";
		str << cedula << "  ";
		str << edad << "  ";
		return str.str();
	};

	
};

