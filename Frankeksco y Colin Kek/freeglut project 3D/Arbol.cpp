#include "Arbol.h"
#include "Cuadricos.h"
#include "Piramide.h"



Arbol::Arbol():ObjetoCompuesto()
{
	ObjetoCuadrico * aux = new Cilindro(dameRandom(4.5,3.5),0.5,0.25);
	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1),- 90);
	aux->setColor(PuntoVector3D(0.58,0.39,0.02, 0));
	introduceObjeto(aux);
}


Arbol::~Arbol()
{
}

Abeto::Abeto():Arbol()
{
	Objeto3D* aux = new Piramide(dameRandom(4, 3.5), dameRandom(1.5, 1), 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
	aux->mT->traslada(&PuntoVector3D(0,0, 2.5, 1));
	introduceObjeto(aux);

}

Pino::Pino(): Abeto()
{
	Objeto3D* aux = new Piramide(dameRandom(3.5, 3), dameRandom(1, 0.75), 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
	aux->mT->traslada(&PuntoVector3D(0, 0, 4, 1));
	introduceObjeto(aux);
}

Roble::Roble():Arbol()
{
	ObjetoCuadrico* aux = new Esfera(dameRandom(1.75, 1.25));
	aux->setColor(PuntoVector3D(0.43, 0.53, 0.1, 0));
	aux->mT->traslada(&PuntoVector3D(0, 4, 0, 1));
	introduceObjeto(aux);
}
Alamo::Alamo() :Roble()
{
	ObjetoCuadrico* aux = new Esfera(dameRandom(1.25, 1));
	aux->setColor(PuntoVector3D(0.43, 0.53, 0.1, 0));
	aux->mT->traslada(&PuntoVector3D(1, 4, 0, 1));
	introduceObjeto(aux);
}

Copa::Copa(int tipo):tipo(tipo){
}

CopaSimple::CopaSimple(int tipo) : Copa(tipo){
	Objeto3D* aux;
	if (tipo == 0){
		aux = new Piramide(dameRandom(4, 3.5), dameRandom(1.5, 1), 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
	}
	else
	{
		aux =  new Esfera(dameRandom(1.75, 1.25));

	}
	introduceObjeto(aux);
}
