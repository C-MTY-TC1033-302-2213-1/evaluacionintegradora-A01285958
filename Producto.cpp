#include "Producto.h"

//Metodos Constructores
Producto::Producto(){
    nombre = "Rosila Muñoz";
    precio = 1285958;
    peso = 18;
}

Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso; //kg
}

//Setters
void Producto::setNombre(string _nombre){
    nombre = _nombre;
}

void Producto::setPrecio(int _precio){
    precio = _precio;
}

void Producto::setPeso(int _peso){
    peso = _peso;
}

//Getters
string Producto::getNombre(){
    return nombre;
}

int Producto::getPrecio(){
    return precio;
}

int Producto::getPeso(){
    return peso;
}

//Otros metodos
string Producto::str(){
    return nombre + '-' +  "$" +to_string(precio) + '-' + to_string(peso) + '-' + "$" +to_string(calculaTotalPagar());

}

int Producto::calculaTotalPagar(){
    int total = precio * peso;
    return total;
}