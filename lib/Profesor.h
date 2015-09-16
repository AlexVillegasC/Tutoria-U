#include "Persona.h";

class Profesor: 
	Persona{

private:
	float salario;

public:

	/*Constructores*/
	Profesor(){}

	Profesor(string nombre, string ap1, string ap2, string ced, int edad, float salario) :Persona()
	{
		this->nombreCompleto = Nombre(nombre, ap1, ap2);
		this->cedula = ced;
		this->edad = edad;
		this->salario = salario;
	};
	
	/*Metodos*/
	//Retorna un string con todos los atributos del objeto Profesor
	string const toString()
	{
		stringstream str = stringstream();
		str << nombreCompleto.toString();
		str << "  ";
		str << cedula << "  ";
		str << edad  << "  ";
		str << salario;
		return str.str();

	}

	/*Propiedades*/
	//setters
	void setNom(string nom,string ap1, string ap2){ this->nombreCompleto = Nombre(nom,ap1,ap2); }
	void setCed(string  ced){ this->cedula = ced; }
	void setEdad(int edad){ this->edad = edad; }
	void setSalario(float salario){ this->salario = salario; }

	//getters
	Nombre getNom(){ return this->nombreCompleto; }
	string getCed(){ return this->cedula; }
	int getEdad(){ return this->edad; }
	float getSalario(){ return this->salario; }




};