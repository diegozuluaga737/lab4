#include "contenedor.h"



void contenedor::leer_enlaces()
{
    int pos=0;
    string nombretexto="lista.txt";
    string nodos=leertexto(nombretexto);



    for(int num=0 ;pos!=-1;num++){
        string nodo1,nodo2,costo;

        pos = nodos.find(' ');
        nodo1 = nodos.substr(0,pos);
        pos = nodos.find(' ',pos+1);
        nodo2 = nodos.substr(0,pos);
        nodo2 = nodo2.substr(nodo1.size()+1);
        pos = nodos.find('\r');
        costo = nodos.substr(0,pos);
        costo = costo.substr(nodo1.size()+nodo2.size()+2);

        modenlace t;
        t.set_costo(costo);
        t.set_nodo_0(nodo1);
        t.set_nodo(nodo2);
        matriz.insert(pair<int,modenlace>(num,t));



        pos = nodos.find('\n');
        nodos = nodos.substr(pos+1);
    }
}

void contenedor::imprimirnodos()
{
  for(it=matriz.begin(); it!=matriz.end() ;it++){
      cout<< it->second.get_nodo_0()<<"  ";
      cout<< it->second.get_nodo()<<"  ";
      cout<< it->second.get_costo()<<"  "<<endl;





  }
  }




