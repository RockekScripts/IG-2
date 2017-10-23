#include "FaroCoche.h"
#include "Cuadricos.h"



FaroCoche::FaroCoche():ObjetoCompuesto()
{
	ObjetoCuadrico * aux = new Cono(0.5f, 0.15f);
	aux->setColor(PuntoVector3D(0, 255, 0, 0));
	this->introduceObjeto(aux);
	aux = new Circulo(0.15f);
	aux->setColor(PuntoVector3D(255, 255, 0, 0));
	this->introduceObjeto(aux);

}


FaroCoche::~FaroCoche()
{
}
