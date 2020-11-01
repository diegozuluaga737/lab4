#ifndef CONTENEDOR_H
#define CONTENEDOR_H
#include "funciones.h"
#include <map>

class contenedor
{
public:
    void leer_enlaces();
    void imprimirnodos();
    void agregarnodosfaltantes();
private:
    map<int, modenlace> matriz;
    map<int, modenlace>::iterator it;
    map<int, modenlace>::iterator it2;

};

#endif // CONTENEDOR_H
