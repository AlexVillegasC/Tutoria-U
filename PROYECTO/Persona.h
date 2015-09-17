#pragma once
#include "headers\Nombre.h";
#include <sstream>

class Persona
{
protected:
	Nombre nombreCompleto;
	int edad;
	string cedula;


	virtual string const toString()
	{
		return "";
	};

public:

	Persona(){	};

	

private:

};

