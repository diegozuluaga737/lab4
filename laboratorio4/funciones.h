#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class modenlace{

public:
    void set_nodo(string nodo0);
    void set_costo(string costo0);
    void set_nodo_0(string nodo_);
    string get_nodo(){return nodo;};
    string get_costo(){return costo;};
    string get_nodo_0(){return nodo_0;};
private:
    string costo;
    string nodo,nodo_0;

};


string leertexto(string);


#endif // FUNCIONES_H
