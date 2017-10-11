#pragma once
#include "TAfin.h"
class Objeto3D
{
public:
	Objeto3D() { mT = new TAfin(); };
	virtual ~Objeto3D() { delete mT; };
	TAfin* mT;
	virtual void dibuja(){};
};

