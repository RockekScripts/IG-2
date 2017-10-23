#pragma once
#include "Objeto3D.h"
class ObjetoCuadrico :
	public Objeto3D
{
public:
	ObjetoCuadrico();
	virtual ~ObjetoCuadrico();
	virtual void dibuja() {};
	void setColor(PuntoVector3D colors);
	void putColor() {
		glColor3d(color.getX(), color.getY(), color.getZ());
	};
protected:
	GLUquadricObj * q;
	PuntoVector3D color;
};



