#pragma once
#include "ObjetoCompuesto.h"


class Piramide :public ObjetoCompuesto
{
public:
	Piramide(GLfloat H, GLfloat R, GLint Nlados, PuntoVector3D Color);
	virtual ~Piramide();
private:
	GLint nLados;
	GLfloat radius;
	GLfloat height;

};

