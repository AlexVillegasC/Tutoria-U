#pragma once
#include<sstream>
#include<iostream>
using std::string;
using namespace std;

class Producto
{
private:
	string id;			//ID de producto STRING
	string nombre;		//NOMBRE de producto STRING
	string categoria;	//CATEGORIA de producto STRING
	int cantidad;		//CANTIDAD de producto INT
	float precio;		//PRECIO de producto FLOAT

public:
	//CONSTRUCTORES
	Producto()
	{
		this->id = "0";
		this->nombre = "";
		this->categoria = "";
		this->cantidad = 0;
		this->precio = 0;
	}
	Producto(string id, string nombre, string categoria, int cantidad, float precio)
	{
		this->id = id;
		this->nombre = nombre;
		this->categoria = categoria;
		this->cantidad = cantidad;
		this->precio = precio;
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
	void setCategoria(string categoria)
	{
		this->categoria = categoria;
	}
	void setCantidad(int cantidad)
	{
		this->cantidad = cantidad;
	}
	void setPrecio(float precio)
	{
		this->precio = precio;
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
	string getCategoria()
	{
		return categoria;
	}
	int getCantidad()
	{
		return cantidad;
	}
	float getPrecio()
	{
		return precio;
	}

	//IMPRIME DATOS DE LA CLASE PRODUCTO
	//concatenar texto***
	string toString()
	{
		std::stringstream out;
		out << getId() << " " << getNombre() << " " << getCategoria() << "" << getCantidad()
			<< "" << getPrecio();
		return out.str();
	}

	//DESTRUCTOR~
	~Producto()
	{
	}
};

