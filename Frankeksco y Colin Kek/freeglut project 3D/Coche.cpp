#include "Coche.h"
#include "Rueda.h"
#include "Cubo.h"
#include "FaroCoche.h"


Coche::Coche():ObjetoCompuesto()
{

	for (size_t i = 0; i < 4; i++)
	{
		Objeto3D * aux = new Rueda();
		this->introduceObjeto(aux);
	}
	PuntoVector3D v(1,0,1,0);
	PuntoVector3D rot(0, 1, 0, 0);

	hijos[0]->mT->traslada(&v);
	hijos[0]->mT->rota(&rot, 180);

	v.setVector(1, 0, -1);
	hijos[1]->mT->traslada(&v);

	v.setVector(-1, 0, 1);
	hijos[2]->mT->traslada(&v);
	hijos[2]->mT->rota(&rot, 180);

	v.setVector(-1, 0, -1);
	hijos[3]->mT->traslada(&v);
	this->introduceObjeto(new Cubo());

	this->introduceObjeto(new FaroCoche());
	rot.setVector(0, 1, 0);
	v.setVector(1.5, 0.25, 0.25);
	hijos[5]->mT->traslada(&v);
	hijos[5]->mT->rota(&rot, -90);

	this->introduceObjeto(new FaroCoche());
	rot.setVector(0, 1, 0);
	v.setVector(1.5, 0.25, -0.25);
	hijos[6]->mT->traslada(&v);
	hijos[6]->mT->rota(&rot, -90);


}


Coche::~Coche()
{
	for (size_t i = 0; i < numHijos; i++)
	{
		delete hijos[i];
	}
}
