#pragma once
#include "ObjetoCompuesto.h"
class Arbol :
	public ObjetoCompuesto
{
public:
	Arbol();
	virtual ~Arbol();
};
class Abeto:public Arbol
{
public:
	Abeto();
	virtual ~Abeto() {};

private:

};
class Pino:public Abeto
{
public:
	Pino();
	virtual ~Pino() {};

private:

};
class Roble:public Arbol
{
public:
	Roble();
	virtual ~Roble() {};

private:

};
class Alamo :public Roble
{
public:
	Alamo();
	virtual ~Alamo() {};

private:

};
class Copa: public ObjetoCompuesto
{
public:
	Copa(int tipo){};
	virtual ~Copa(){};

protected:
	int tipo;

};

class CopaSimple: public Copa
{
public:
	CopaSimple(int tipo);
	virtual ~CopaSimple();

private:

};

class CopaDoble:public Copa
{
public:
	CopaDoble(int tipo);
	virtual ~CopaDoble();

private:

};

