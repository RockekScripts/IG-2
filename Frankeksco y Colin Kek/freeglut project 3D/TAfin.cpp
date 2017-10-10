#include "TAfin.h"


TAfin::TAfin()
{
}


TAfin::~TAfin()
{
}
void TAfin::traslada(PuntoVector3D* v) {
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(v->getX(), v->getY(), v->getZ());
	GLfloat m1[16];
	//Dejar la matriz actual de modelado-vista en m1
	//Los 16 datos est�n enumerados por columnas
	glGetFloatv(GL_MODELVIEW_MATRIX, m1);
	glPopMatrix();
	postmultiplica(m1);
}
void TAfin::postmultiplica(GLfloat* m1) {
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	//Cargar m como matriz actual de modelado-vista
	glLoadMatrixf(m);
	//Post-multiplicar por m1
	glMultMatrixf(m1);
	//Dejar el resultado en m
	glGetFloatv(GL_MODELVIEW_MATRIX, m);
	glPopMatrix();
}