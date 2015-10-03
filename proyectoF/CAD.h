#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class CAD{

private:
	string url;

public:
	CAD(){}

	CAD(string url)
	{
		this->url = url;
	};

	//Tipo: Escritura   
	//Funcion: Create
	/*
		parametros:
			
	*/
	void guardar(string cadena[],int length, int mode){
		ofstream ofile;
		if (mode == 1)
		{
			ofile = ofstream(url, std::fstream::out | fstream::app);
		}
		else
		{
			ofile = ofstream(url);
		}

		string temp = "";
		for (int i = 0; i < length; i++)
		{
			 temp = cadena[i];
			//Si existe salto de linea, salga
			if (temp.length()<=1)
			{
				break;
			}
			//Si no hay salto de linea, prosigue lellendo las f
			else
			{	
				temp.append("\n");
				ofile << temp;
			}
		}
		ofile.close();
	};


	void guardar(string cadena, int mode){
		ofstream ofile;
		if (mode == 1)
		{
			ofile = ofstream(url, std::fstream::out | fstream::app);
		}
		else
		{
			ofile = ofstream(url);
		}
		cadena.append("\n");
		ofile << cadena;
		ofile.close();
	};

	//Tipo: lectura
	//función: Read
	/*
		retorna una cadena tipo string, que contiene toda la lectura de filas en un fichero txt
	*/
	string leer(){

		ifstream ifile(url);
		string row = "";
		ostringstream cadena;
		while (true)
		{
			//Validación
			getline(ifile, row);
			if (row.length() <= 1)
			{
				break;
			}
			else
			{
				row.append("\n");//añadir salto de linea al string, despues de la lectura de la linea del txt
				cadena << row;
			}
		}
		return cadena.str();
	};


	//Tipo: lectura y escritura
	//función: Update
	/*
		recive 2 subCadenas:
		1  el subString viejo, que se desea encontrar para cambiar en el fichero
		2  el subString nuevo que se desea sobre escribir encima del viejo, en el fichero
		Void: Realiza la sobre escritura en el fichero
	*/
	void update(string viejo, string nuevo){
		
		size_t subCadena;
		string cadena = leer();
		subCadena = cadena.find(viejo);

		if (subCadena != std::string::npos)//Si se encontro la sub cadena que queremos actualizar
		{
			cadena.replace(subCadena, viejo.length(), nuevo);//reemplace la cadena vieja por la cadena nueva, de forma local	
			string vector[1];
			vector[0] = cadena;
			guardar(vector,1,2);//guarda la nueva cadena editada en el fichero, sustituyendo lo anterior
		}
		else //Si no se encontro la sub cadena
		{
			//nada
		}	

	}
	


};
