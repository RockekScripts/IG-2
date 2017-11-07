#pragma once
#include "ObjetoCompuesto.h"
class Arbol :
	public ObjetoCompuesto
{
public:
	Arbol();
	virtual ~Arbol();
protected:
	GLdouble altura;
};
class Abeto:public Arbol
{
public:
	Abeto();
	virtual ~Abeto() {};

private:

};
class Pino :public Arbol
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
class Alamo :public Arbol
{
public:
	Alamo();
	virtual ~Alamo() {};

private:

};
class Copa: public ObjetoCompuesto
{
public:
	Copa(int tipo);
	virtual ~Copa(){};

protected:
	int tipo;

};

class CopaSimple: public Copa
{
public:
	CopaSimple(int tipo);
	virtual ~CopaSimple(){}

private:

};

class CopaDoble:public CopaSimple
{
public:
	CopaDoble(int tipo);
	virtual ~CopaDoble(){};

private:

};

