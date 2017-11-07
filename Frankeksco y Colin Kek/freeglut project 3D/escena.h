#pragma once
#include "ObjetoCompuesto.h"
class escena :
	public ObjetoCompuesto
{
public:
	escena();
	~escena();
	Objeto3D * coche;
	void update();
	int numArboles=0;
	bool fin = false;
	inline bool getFin(){ return fin; };
};

