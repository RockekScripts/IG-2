#pragma once
#include "TAfin.h"
class Objeto3D
{
public:
	Objeto3D();
	virtual ~Objeto3D();
	TAfin* mT;
	virtual void dibuja(){};
};

