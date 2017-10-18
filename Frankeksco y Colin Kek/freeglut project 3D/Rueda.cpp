#include "Rueda.h"



Rueda::Rueda() :ObjetoCuadrico()
{
}


Rueda::~Rueda()
{
}

void Rueda::dibuja() {
	putColor();
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	gluCylinder(q, 0.5f, 0.5f, 0.5f, 15, 15);
	glColor3d(1, 1, 1);
	gluDisk(q, 0.05, 0.5f, 4, 15);
	glPopMatrix();
}