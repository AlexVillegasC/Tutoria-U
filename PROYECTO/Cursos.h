#pragma once;
#include <iostream>
#include "Estudiante.h";
#include "Profesor.h"
#include "headers\libGameh.h";
#include "CAD.h";


using namespace std;

class Curso
{
private:
	string nombreCurso;
	string idCurso;


	//Atributos globales de entrada, para objetos que heredan de Persona
	int static const cupo = 15;
	Estudiante lista[cupo];
	Profesor profe = Profesor();

	int contadorEstudiantes = 0;
	string llenadEst = "";
	string nombre, ap1, ap2 = "";
	string ced = "";
	int grado = 0, edad = 0;
	float salario = 0.0;

	//CAD
	string url;
	CAD crud;

public:
	Curso()
	{
		 
	}

	Curso(string nom, string id,string url)
	{
		this->url = url;
		this->nombreCurso = nom;
		this->idCurso = id;
		crud = CAD(url);
	}



	//guarda en el array
	void agregarLista(Estudiante est)
	{
		if (contadorEstudiantes < cupo)
		{
			lista[contadorEstudiantes] = est;
			contadorEstudiantes++;
		}
	}

	//guarda de forma local una lista de estudiantes
	void guardarEstudiantes(int x, int y)
	{


		Color(10);
		gotoxy(x, y);  cout << "Ingresa un estudiantes:";
		pintarFila(x - 1, 35, y + 1);//parameters: x1,x2, y

		gotoxy(x, y + 2); cout << "Nombre y apellidos:";
		cin >> nombre;
		cin >> ap1;
		cin >> ap2;
		gotoxy(x, y + 3);  cout << "Edad:";
		cin >> edad;
		gotoxy(x, y + 4);  cout << "Grado:";
		cin >> grado;
		gotoxy(x, y + 5);  cout << "Cedula:";
		cin >> ced;

		//se crea un estudiante
		Estudiante est = Estudiante(nombre, ap1, ap2, ced, edad, grado);
		agregarLista(est);
	}

	void guardarProfesor(int x, int y)
	{

		while (1){


			Color(10);
			gotoxy(x, y);  cout << "Ingresa los datos del profesor:";
			pintarFila(x - 1, 35, y + 1);//parameters: x1,x2, y

			gotoxy(x, y + 2); cout << "Nombre y apellidos:";
			cin >> nombre;
			cin >> ap1;
			cin >> ap2;
			gotoxy(x, y + 3);  cout << "Edad:";
			cin >> edad;
			gotoxy(x, y + 4);  cout << "Salario:";
			cin >> salario;
			gotoxy(x, y + 5);  cout << "Cedula:";
			cin >> ced;

			//se crea un estudiante
			profe = Profesor(nombre, ap1, ap2, ced, edad, salario);

		
		}

	}


	//genera un reporte del curso
	void guardarCurso(string nombreCurso){

		string salida = "==================================================\n";
		salida.append("Curso: " + nombreCurso + "                        \n");
		salida.append("idCurso: " + idCurso + "                          \n");
		salida.append("====================================================\n");
		
		this->crud.guardar(salida,1);

	}

};