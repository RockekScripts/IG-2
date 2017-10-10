#pragma once
#include "Objeto3D.h"
class ObjetoCompuesto: public Objeto3D
{
public:
	ObjetoCompuesto();
	~ObjetoCompuesto();
	virtual void dibuja();
protected:
	int numHijos;
	Objeto3D** hijos;
};

