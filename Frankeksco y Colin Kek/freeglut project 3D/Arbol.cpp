#include "Arbol.h"
#include "Cuadricos.h"
#include "Piramide.h"



Arbol::Arbol():ObjetoCompuesto()
{
	ObjetoCuadrico * aux = new Cilindro(4,0.5);
	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1),- 90);
	aux->setColor(PuntoVector3D(0.58,0.39,0.02, 0));
	introduceObjeto(aux);
}


Arbol::~Arbol()
{
}

Abeto::Abeto():Arbol()
{
	Objeto3D* aux= new Piramide(4, 1.25, 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
	aux->mT->traslada(&PuntoVector3D(0,0, 2.5, 1));
	introduceObjeto(aux);

}

Pino::Pino(): Abeto()
{
	Objeto3D* aux = new Piramide(4, 1.25, 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
	aux->mT->traslada(&PuntoVector3D(0, 0, 4, 1));
	introduceObjeto(aux);
}

Roble::Roble():Arbol()
{
}
