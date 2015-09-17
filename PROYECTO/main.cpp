#include <iostream>
#include "headers\libGameh.h";
#include "Cursos.h";

using std::string;
using namespace std;





int main()
{

	Curso unCurso = Curso("Mate","1234","mate.txt");

	//Opcion de selección en el menú
	int opcion = 0;
	int cupoEstudiantes = 15;
	string llenadEst = "";



	do
	{
		Color(15);
		system("cls");
		pintar_marco();
			gotoxy(7, 5); cout << "Crear un curso";
			pintarFila(4, 25, 6);//parameters: x1,x2, y
			gotoxy(5, 8); cout << "1.Agregar estudiantes";
			gotoxy(5, 9); cout << "2.Asignar un profesor";
			gotoxy(5, 10); cout << "3.Generar";
			gotoxy(5, 11); cout << "Digite: " ;


		cin >> opcion;

		switch (opcion)
		{
		case 1:
			system("cls");
			for (int i = 0; i < cupoEstudiantes; i++)
			{
				unCurso.guardarEstudiantes(5, 5);
				gotoxy(5,5 + 6);  cout << "Deseas ingresar otro estudiante? si - no";
				gotoxy(5, 5 + 7);  cout << "Digite: ";

				cin >> llenadEst;
				int find = llenadEst.find("no");
				if (find == 0){
					system("cls");
					break;
				}
				system("cls");
			}
		
			break;
		
		case 2:
			system("cls");
			unCurso.guardarProfesor(25, 5);

			break;

		case 3:
			unCurso.guardarCurso("Mate");
		default:
			break;
		}
	} while (opcion != 0);



	getchar();
	return 0;
}