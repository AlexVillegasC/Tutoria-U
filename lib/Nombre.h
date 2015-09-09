#pragma once
#include <iostream>
#include <sstream>
using namespace std;
#include <string>
using std::string;

class Nombre
{
private:
	string nombre;//variable que guarda el nombre
	string apellido1;//variable que guarda el primer apeelido
	string apellido2;//variable que guarda el segundo apellido
public:

	Nombre()//Contructor Default
	{
		this->nombre = "";
		this->apellido1 = "";
		this->apellido2 = "";
	}
	Nombre(string nombre, string apellido1, string apellido2)//contructor parametros
	{
		this->nombre = nombre;
		this->apellido1 = apellido1;
		this->apellido2 = apellido2;
	}
	//Setter
	void setNombre(string nombre)
	{
		this->nombre = nombre;
	}
	void setApellido1(string apeliido1)
	{
		this->apellido1 = apeliido1;
	}
	
	void setApellido2(string apellido2)
	{
		this->apellido2 = apellido2;
	}
	//Getter
	string getNombre()
	{
		return this->nombre = nombre;
	}
	string getApellido1()
	{
		return this->apellido1 = apellido1;
	}
		string getApellido2()
		{
			return this->apellido2 = apellido2;
		}
		//Imprime los datos de la clase
		string toString() {
			std::stringstream out;
			out << "" << getNombre() << " "
				<< "" << getApellido1() << " "
				<< "" << getApellido2()  ;
			return out.str();
		}
	~Nombre()
	{
	}
};

