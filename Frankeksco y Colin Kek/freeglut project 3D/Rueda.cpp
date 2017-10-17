#include "Rueda.h"



Rueda::Rueda()
{
	q = gluNewQuadric();
}


Rueda::~Rueda()
{
}

void Rueda::dibuja() {
	putColor();
	glPushMatrix();
	gluCylinder(q, 0.5f, 0.5f, 0.5f, 15, 15);
	glColor3d(1, 1, 1);
	gluDisk(q, 0.05, 0.5f, 3, 15);
	glPopMatrix();
}