#include "funciones.h"


string leertexto(string nombretexto){
    string texto="",linea="";
    fstream lectura;
    lectura.open(nombretexto,fstream::in|fstream::binary);
    if(lectura.fail()){
        cout<<"No se pudo abrir el archivo." << endl;
        exit(1);
    }
    while(lectura.good()){
        linea=lectura.get();
        texto.append(linea);
    }
    lectura.close();
    texto.pop_back();
    return texto;
}

void modenlace::set_nodo(string nodo0)
{
    nodo=nodo0;
}
void modenlace::set_costo(string costo0)
{
    costo=costo0;
}

void modenlace::set_nodo_0(string nodo_)
{
    nodo_0=nodo_;
}


