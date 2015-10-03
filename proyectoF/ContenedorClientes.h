#pragma once
#include "Cliente.h"
#include<fstream>
#include "CAD.h"

class ContenedorClientes :
	public Cliente
{
private:
	int static const TAM = 15;//tamaño maximo del vector
	Cliente vectCliente[TAM];
	int capacidadClientes;//posicion del vector.
	string txtName = "contenedorClientes.txt";
	CAD cad;
public:

	ContenedorClientes()
	{
		cad = CAD(txtName);
		this->capacidadClientes = 0;
	}

	void guardarCliente(Cliente cliente) {//Agrega un cliente mientras haya campo
		if (capacidadClientes < 10) {
			vectCliente[capacidadClientes] = cliente;
			capacidadClientes++;
		}
		else {
			cout << "Vector lleno" << endl;
		}
	}
	//falta editar cliente

	void eliminarUltimoCliente() {//quitar cliente
		if (capacidadClientes > 0)
		{
			capacidadClientes--;
		}
	}
	void imprimirCliente() { //imprimir cliente
		cout << "==============================================================\n"
			<< "Id\tNombre\tApellido1\tApellido2\tSexo\tTelefono\tCorreo\n\n"
			<< "==============================================================\n";
		for (int i = 0; i < capacidadClientes; i++)
		{
			cout << vectCliente[i].toString();
		}
		cout << "==============================================================\n";
	}

	void guardarVectorEnArchivo() {//Guardar en archivo
		ofstream salida("cliente.txt", ios::out);//crea el archivo para escribir en él
		for (int i = 0; i < capacidadClientes; i++)
		{
			salida.write(reinterpret_cast<char*>(&vectCliente[i]), sizeof(Cliente));
		}
		salida.close();
	}

	void recuperarEnArchivo() {//Recuperar en archivo
		Cliente cliente;
		ifstream entrada("cliente.txt", ios::in);//crea el archivo para escribir en él
		entrada.read(reinterpret_cast<char*>(&cliente), sizeof(Cliente));
		while (!entrada.eof())//mientras entrada no(!) llegue al final del archivo(eof)
		{
			entrada.read(reinterpret_cast<char*>(&cliente), sizeof(Cliente));
		}
		entrada.close();
	}
	//falta como regresar al menu princupal :(


	void imprimirDeArchivo(){
		cout << cad.leer();
	}


	~ContenedorClientes()
	{
	}
};