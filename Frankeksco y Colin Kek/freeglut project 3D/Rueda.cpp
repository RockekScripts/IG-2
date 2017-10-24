#include "Rueda.h"
#include "Cuadricos.h"



Rueda::Rueda() :ObjetoCompuesto()
{
	Objeto3D * aux = new Cilindro(0.5, 0.5);
	this->introduceObjeto(aux);
	aux = new Circulo(0.5);
	this->introduceObjeto(aux);
	aux = new Circulo(0.5);
	aux->mT->traslada(&PuntoVector3D(0, 0, 0.5, 1));

}


Rueda::~Rueda()
{
}
