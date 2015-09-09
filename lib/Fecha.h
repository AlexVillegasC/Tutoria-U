#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Fecha
{

private:
	int dia;
	int mes;
	int annio;



public:
	Fecha::Fecha()
	{
	}
	Fecha::Fecha(int dia, int mes, int annio)
	{
		this->dia = dia;
		this->mes = mes;
		this->annio = annio;
	}


	//getter Lectura
	int getDia(){
		return dia;
	}

	int getMes(){
		return mes;
	}
	//Definici�n de una funci�n
	//TIpo de retorn
	//Nombre del metodo
	//Parametros
	//Cuerpo
	int getAnnio(){
		return annio;
	}

	//setter Escritura
	void setDia(int dia){
		this->dia = dia;
	}


	
	void setMes(int mes){
		this->mes = mes;
	}



	void setAnnio(int annio){
		this->annio = annio;
	}
	//Metodo que retorna una cadena "string" que tiene la fecha con formato dia/mes/annio
	string toString(){
		std::stringstream cadena;

		//El error que ten�a en la tutor�a est� en esa linea de c�digo, son de esos errores que solo nos pasan cuando estas exponiendo xD
		/*  Encuentren ustedes t�mbien porqu� esa linea no compila...
			cadena << "Fecha: " << getDia<< "/" << getMes<< "/" << getAnnio<< endl;
		*/
		cadena << "" <<getDia()<<"/"<<getMes()<<"/"<<getAnnio()<<endl;
		return cadena.str();


	}


	Fecha::~Fecha()
	{
	}


};

