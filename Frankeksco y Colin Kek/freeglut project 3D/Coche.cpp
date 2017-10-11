#include "Coche.h"
#include "Rueda.h"



Coche::Coche():ObjetoCompuesto()
{
	hijos = new Objeto3D*[7];
	for (size_t i = 0; i < 4; i++)
	{
		Objeto3D * aux=new Rueda();
		this->introduceObjeto(aux);
	}
}


Coche::~Coche()
{
}
