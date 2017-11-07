#include "Arbol.h"
#include "Cuadricos.h"
#include "Piramide.h"



Arbol::Arbol():ObjetoCompuesto()
{
	altura = dameRandom(4.5, 3.5);
	ObjetoCuadrico * aux = new Cilindro(altura,0.5,0.25);
	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1),- 90);
	aux->setColor(PuntoVector3D(0.58,0.39,0.02, 0));
	introduceObjeto(aux);
}


Arbol::~Arbol()
{
}

Abeto::Abeto():Arbol()
{
	Objeto3D* aux = new CopaSimple(0);
	aux->mT->traslada(&PuntoVector3D(0, altura - 1, 0, 1));
	introduceObjeto(aux);

}

Pino::Pino() :Arbol()
{
	//Objeto3D* aux = new Piramide(dameRandom(3.5, 3), dameRandom(1, 0.75), 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
	Objeto3D * aux = new CopaDoble(0);
//	aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
	aux->mT->traslada(&PuntoVector3D(0, altura-1, 0, 1));
	introduceObjeto(aux);
}

Roble::Roble():Arbol()
{
	Objeto3D* aux = new CopaSimple(1);
	aux->mT->traslada(&PuntoVector3D(0, altura, 0, 1));
	introduceObjeto(aux);
}
Alamo::Alamo() :Arbol()
{
	Objeto3D* aux = new CopaDoble(1);
	aux->mT->traslada(&PuntoVector3D(0, altura, 0, 1));
	introduceObjeto(aux);
}

Copa::Copa(int tipo):tipo(tipo){
}

CopaSimple::CopaSimple(int tipo) : Copa(tipo){
	if (tipo == 0){
		Objeto3D* aux;
		aux = new Piramide(dameRandom(4, 3.5), dameRandom(1.5, 1), 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
		aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
		introduceObjeto(aux);
	}
	else
	{
		ObjetoCuadrico* aux = new Esfera(dameRandom(1.75, 1.25));
		aux->setColor(PuntoVector3D(0.43, 0.53, 0.1, 0));
		introduceObjeto(aux);

	}
}

CopaDoble::CopaDoble(int tipo): CopaSimple(tipo){
	if (tipo == 0){
		Objeto3D* aux;
		aux = new Piramide(dameRandom(4, 3.5), dameRandom(1.5, 1), 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
		aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
		introduceObjeto(aux);
		aux = new Piramide(dameRandom(3.5, 3), dameRandom(1, 0.75), 15, PuntoVector3D(0.43, 0.53, 0.1, 0));
		aux->mT->traslada(&PuntoVector3D(0, 2, 0, 1));
		aux->mT->rota(&PuntoVector3D(1, 0, 0, 1), -90);
		introduceObjeto(aux);
	}
	else
	{
		ObjetoCuadrico* aux = new Esfera(dameRandom(1.75, 1.25));
		aux->setColor(PuntoVector3D(0.43, 0.53, 0.1, 0));
		introduceObjeto(aux);
		aux = new Esfera(dameRandom(1.25, 1));
		aux->setColor(PuntoVector3D(0.43, 0.53, 0.1, 0));
		aux->mT->traslada(&PuntoVector3D(0, 0,2, 1));

		introduceObjeto(aux);

	}


}
