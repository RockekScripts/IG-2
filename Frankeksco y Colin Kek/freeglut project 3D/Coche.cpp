#include "Coche.h"
#include "Rueda.h"



Coche::Coche():ObjetoCompuesto()
{
	hijos = new Objeto3D*[7];
	for (size_t i = 0; i < 4; i++)
	{
		Objeto3D * aux = new Rueda();
		this->introduceObjeto(aux);
	}
	PuntoVector3D v(1,1,-1,0);
	hijos[0]->mT->traslada(&v);
	v.setVector(1, -1, -1);
	hijos[1]->mT->traslada(&v);
	v.setVector(-1, -1, -1);
	hijos[2]->mT->traslada(&v);
	v.setVector(-1, 1, -1);
	hijos[3]->mT->traslada(&v);

}


Coche::~Coche()
{
	for (size_t i = 0; i < numHijos; i++)
	{
		delete hijos[i];
	}
}
