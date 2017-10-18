#pragma once
#include "ObjetoCuadrico.h"
class Cono :
	public ObjetoCuadrico
{
public:
	Cono(int nLados);
	virtual ~Cono();
	virtual void dibuja();
private:
	GLint NSlices;
};

