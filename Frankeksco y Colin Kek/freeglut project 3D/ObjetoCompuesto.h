#pragma once
#include "Objeto3D.h"
class ObjetoCompuesto: public Objeto3D
{
public:
	ObjetoCompuesto();
	virtual ~ObjetoCompuesto();
	virtual void dibuja();
	void introduceObjeto(Objeto3D* objeto);
	
protected:
	int numHijos=0;
	Objeto3D** hijos;
};

