#pragma once
#include "Malla.h"
class Cubo :
	public Malla
{
public:
	Cubo();
	virtual ~Cubo();

	void cambiaSoliAWire(){
		transparente = !transparente;
	}
};

