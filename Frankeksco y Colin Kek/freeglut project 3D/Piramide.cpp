#include "Piramide.h"
#include "Cuadricos.h"

Piramide::Piramide(GLfloat H, GLfloat R, GLint Nlados, PuntoVector3D Color): ObjetoCompuesto(),nLados(Nlados),radius(R),height(H)
{
	ObjetoCuadrico* aux = new Cono(H, R, Nlados);
	aux->setColor(Color);
	this->introduceObjeto(aux);
	aux = new Circulo(R, Nlados);
	aux->setColor(Color);
	this->introduceObjeto(aux);
}

Piramide::~Piramide()
{
}
