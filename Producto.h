#ifndef Producto_h
#define Producto_h

#include <stdio.h>
#include <string>
using namespace std;

class Producto{
    protected:
    string nombre;
    int precio;
    int peso;

    public:
//Metodos Constructores
Producto();
Producto(string _nombre, int _precio, int _peso);

//Setters
void setNombre(string _nombre);
void setPrecio(int _precio);
void setPeso(int _peso);

//Getters
string getNombre();
int getPrecio();
int getPeso();

//Otros metodos
virtual string str();
virtual int calculaTotalPagar();







};


#endif /* Producto_h */
