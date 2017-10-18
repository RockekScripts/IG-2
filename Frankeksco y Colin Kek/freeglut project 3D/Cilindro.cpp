#include "Cilindro.h"


Cilindro::Cilindro() :ObjetoCuadrico()
{
}


Cilindro::~Cilindro()
{
}
void Cilindro::dibuja(){
	putColor();
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	gluCylinder(q, 1, 1, 1, 15, 15);
	glPopMatrix();
}
