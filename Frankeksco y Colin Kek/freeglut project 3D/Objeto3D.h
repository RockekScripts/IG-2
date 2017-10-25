#pragma once
#include "TAfin.h"
class Objeto3D
{
public:
	Objeto3D() { mT = new TAfin(); };
	virtual ~Objeto3D() { delete mT; };
	TAfin* mT;
	virtual void dibuja()=0;
	static GLfloat dameRandom(GLfloat max, GLfloat min) {
		return min + static_cast <GLfloat> (rand()) / (static_cast <GLfloat> (RAND_MAX / (max - min)));
	}
};

