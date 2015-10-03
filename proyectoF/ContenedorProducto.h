#pragma once
#include<fstream>
#include "Producto.h"
#include "libGameh.h"
#include "CAD.h"

class ContenedorProducto :
	public Producto
{
private:
	int static const TAM = 15;//tamaño maximo del vector
	Producto vectProducto[TAM];
	int capacidadProducto;//posicion del vector.
	//instanciar objeto factura
	//instanciar detalle de factura
	string txtName = "contenedorProd.txt";
	CAD cad;
public:

	ContenedorProducto()
	{
		cad = CAD(txtName);
		this->capacidadProducto = 0;
	}
	void guardarProducto(Producto producto) {//Agrega un producto mientras haya campo

		
		if (capacidadProducto < 10) {
			vectProducto[capacidadProducto] = producto;
			capacidadProducto++;
		}
		else {
			cout << "Vector lleno" << endl;
		}
	}
	void imprimirProducto() { //imprimir producto
		cout << "==============================================================\n"
			<< "Id\tNombre\tCategoria\tCantidad\tPrecio\n\n"
			<< "==============================================================\n";
		for (int i = 0; i < capacidadProducto; i++)
		{
			cout << vectProducto[i].toString();
		}
		cout << "==============================================================\n";
	}
	//falta editar producto

	void eliminarUltimoProducto() {//quitar producto
		if (capacidadProducto > 0)
		{
			capacidadProducto--;
		}
	}
	void guardarVectorEnArchivo() {//Guardar en archivo
		ofstream salida("producto.txt", ios::out);//crea el archivo para escribir en él
		for (int i = 0; i < capacidadProducto; i++)
		{
			salida.write(reinterpret_cast<char*>(&vectProducto[i]), sizeof(Producto));
		}
		salida.close();
	}

	void recuperarEnArchivo() {//Recuperar en archivo
		Producto producto;
		ifstream entrada("producto.txt", ios::in);//crea el archivo para escribir en él
		entrada.read(reinterpret_cast<char*>(&producto), sizeof(Producto));
		while (!entrada.eof())//mientras entrada no(!) llegue al final del archivo(eof)
		{
			entrada.read(reinterpret_cast<char*>(&producto), sizeof(Producto));
		}
		entrada.close();
	}
	//falta como regresar al menu princupal :(


	//imprime el menu de compras
	void imprimirMenu(int x,int y){
		string opcionID = "";
		int opcionCantidad = 0;
		gotoxy(x, y);  cout << "Menu de compras:";
		y++;
		
		gotoxy(x, y);  cout << "Nombre			Precio			ID";
		y++;
		for (int i = 0; i < TAM; i++)
		{//inicio for
			gotoxy(x,y); cout << vectProducto[i].getNombre() << "			" << vectProducto[i].getPrecio() << "			" << vectProducto[i].getId();
			y++;
		}//fin for
		gotoxy(x, y);  cout << "Digite el código del producto";
		y++;
		cin >> opcionID;
		
		
		gotoxy(x, y);  cout << "Digite la cantidad";
		y++;
		cin >> opcionCantidad;

		for (int i = 0; i < TAM; i++)
		{
			//si se encontro el producto, pormedio de su ID
			if ( opcionID.compare(vectProducto[i].getId()) ){
				//consulte si la cantidad deseada por el cliente existe
				int res = vectProducto[i].getCantidad() - opcionCantidad;
				if ( res < 0 ){
					cout << "No se cuenta con la cantidad que usted desea";
					break;
				}
				else
				{

					vectProducto[i].setCantidad(res);
					//actualiza fichero
					guardarVectorEnArchivo();//provicional
					cout << "añadido a la compra!";
					break;
				}
			}
		}
		//Crear detalle de la compra
		//añadir detalle de compra a la lista de detalles de compra de la factura

		pausa();
	}
	 

	void imprimirDeArchivo(){
		cout << cad.leer();
	}


	~ContenedorProducto()
	{
	}
};

