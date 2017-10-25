#include "escena.h"
#include "Coche.h"
#include "Arbol.h"

escena::escena()
{
	this->introduceObjeto(new Coche());
	this->hijos[0]->mT->traslada(&PuntoVector3D(0, 0.5f, 0,1));
	coche = hijos[0];
	for (int i = -10; i < 10; i++)
	{
		for (int j = -10; j < 10; j++)
		{
			if (rand() % 20 == 1){
				Objeto3D * aux;
				switch (rand() % 4)
				{
				case 0: aux = new Abeto(); break;
				case 1: aux = new Alamo(); break;
				case 2: aux = new Roble(); break;
				case 3: aux = new Pino(); break;
				default:
					break;
				}
				PuntoVector3D vec(i, 0, j, 1);
				aux->mT->traslada(&vec);
				this->introduceObjeto(aux);
			}
				
		}

	}
}

void escena::update(){
	for (size_t i = 1; i < numHijos; i++)
	{
		if (hijos[i]){
			if (hijos[i]->mT->getPos().dist(coche->mT->getPos()) < 1.5){
				delete hijos[i];
				hijos[i] = nullptr;
			}
		}
	}
}

escena::~escena()
{
}
