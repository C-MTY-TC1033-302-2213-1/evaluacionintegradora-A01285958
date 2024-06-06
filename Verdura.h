#ifndef Verdura_h
#define Verdura_h

#include <stdio.h>
#include <string>

#include "Producto.h" //Clase Base
using namespace std;

class Verdura: public Producto{
    private: 
        string temporada;
    public:
        //Constructores
        Verdura();
        Verdura(string _nombre, int _precio, int _peso, string _temporada);

        //Otros Metodos
        string str();
        int calculaTotalPagar();
};

#endif /* Verdura_h */