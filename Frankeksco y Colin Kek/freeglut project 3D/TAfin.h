#pragma once
#include <GL/freeglut.h>
#include "PuntoVector3D.h"
class TAfin
{
public:
	TAfin();
	~TAfin();
	GLfloat m [16];
	void traslada(PuntoVector3D* v);
	void postmultiplica(GLfloat* m1);
};

