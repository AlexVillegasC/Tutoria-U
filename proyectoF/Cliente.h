#pragma once
#include<sstream>
#include<iostream>
using std::string;
using namespace std;

class Cliente
{
private:
	string id;
	string nombre;
	string apellido1;
	string apellido2;
	char sexo;
	string telefono;
	string correo;
public:

	Cliente()
	{
		this->id = "";
		this->nombre = "";
		this->apellido1 = "";
		this->apellido2 = "";
		this->sexo = '\0';
		this->telefono = "";
		this->correo = "";
	}

	Cliente(string id,string nombre, string apellido1, string apellido2,char sexo, string telefono,string correo)
	{
		this->id = id;
		this->nombre = nombre;
		this->apellido1 = apellido1;
		this->apellido2 = apellido2;
		this->sexo = sexo;
		this->telefono = telefono;
		this->correo = correo;
	}
	//METODOS 
	//SETTER
	void setId(string id)
	{
		this->id = id;
	}
	void setNombre(string nombre)
	{
		this->nombre = nombre;
	}
	void setApellido1(string apellido1)
	{
		this->apellido1 = apellido1;
	}
	void setApellido2(string apellido2)
	{
		this->apellido2 = apellido2;
	}
	void setSexo(char sexo)
	{
		this->sexo = sexo;
	}
	void setTelefono(string telefono)
	{
		this->telefono = telefono;
	}
	void setCorreo(string correo)
	{
		this->correo = correo;
	}
	//METODOS 
	//GETTER
	string getId()
	{
		return id;
	}
	string getNombre()
	{
		return nombre;
	}
	string getApellido1()
	{
		return apellido1;
	}
	string getApellido2()
	{
		return apellido2;
	}
	char getSexo()
	{
		return sexo;
	}
	string getTelefono()
	{
		return telefono;
	}
	string getCorreo()
	{
		return correo;
	}

	//IMPRIME DATOS DE LA CLASE FECHA...
	//concatena texto***
	string toString()
	{
		std::stringstream out;
		out << getId() << getNombre() << "" << getApellido1() << "" << getApellido2() << "" << getSexo() << "" << getTelefono() << "" << getCorreo();
		return out.str();
	}

	~Cliente()
	{
	}
};

