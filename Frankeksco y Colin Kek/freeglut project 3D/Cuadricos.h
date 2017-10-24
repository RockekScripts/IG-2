#pragma once
#include "ObjetoCuadrico.h"
class Cilindro :
	public ObjetoCuadrico
{
public:
	Cilindro(GLfloat H, GLfloat RBot, GLfloat RTop=0, GLint Nlados = 15);
	virtual ~Cilindro();
	virtual void dibuja();
private:
	GLfloat radiusBot;
	GLfloat radiusTop;
	GLfloat height;
	GLint Lados;
	
};

class Cono :public ObjetoCuadrico
{
public:
	Cono(GLfloat H, GLfloat R, GLint Nlados = 15);
	virtual ~Cono();
	virtual void dibuja();
private:
	GLfloat radius;
	GLfloat height;
	GLint Lados;

};
class Circulo:public ObjetoCuadrico
{
public:
	Circulo(GLfloat R,GLint Nlados = 15);
	virtual ~Circulo();
	virtual void dibuja();

private:
	GLfloat radius;
	GLint Lados;
};

class Esfera : public ObjetoCuadrico
{
public:
	Esfera(GLfloat R);
	virtual ~Esfera();
	virtual void dibuja();
private:
	GLfloat radius;


};

