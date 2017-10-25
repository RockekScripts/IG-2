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
};

