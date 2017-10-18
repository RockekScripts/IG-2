#pragma once
#include <GL/freeglut.h>
#include "PuntoVector3D.h"
class TAfin
{
public:
	TAfin();
	~TAfin();
	void traslada(PuntoVector3D* v);
	void rota(PuntoVector3D* v, GLdouble angulo);
	void postmultiplica(GLfloat* m1);
	GLfloat* m;
private:
};

