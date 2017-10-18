#include "ObjetoCuadrico.h"



ObjetoCuadrico::ObjetoCuadrico()
{
	color = PuntoVector3D(0, 0, 0, 1);
	q = gluNewQuadric();
}


ObjetoCuadrico::~ObjetoCuadrico()
{
	gluDeleteQuadric(q);
}

void ObjetoCuadrico::setColor(PuntoVector3D colors)
{
	color = colors;
}
