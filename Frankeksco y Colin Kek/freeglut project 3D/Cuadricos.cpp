#include "Cuadricos.h"
Cilindro::Cilindro(GLfloat H, GLfloat RBot, GLfloat RTop, GLint Nlados) :ObjetoCuadrico(), height(H), radiusBot(RBot), radiusTop((RTop == 0)?RBot:RTop), Lados(Nlados)
{
}


Cilindro::~Cilindro()
{
}
void Cilindro::dibuja() {
	putColor();
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	gluCylinder(q, radiusBot, radiusTop,height,Lados, 15);
	glPopMatrix();
}

Cono::Cono(GLfloat H, GLfloat R,GLint Nlados) : ObjetoCuadrico(), height(H), radius(R), Lados(Nlados)
{
}

Cono::~Cono()
{
}

void Cono::dibuja()
{
	putColor();
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	gluCylinder(q, radius, 0, height, Lados, 15);
	glPopMatrix();
}


Circulo::Circulo(GLfloat R,GLint Nlados) :ObjetoCuadrico(), radius(R),Lados(Nlados)
{
}

Circulo::~Circulo()
{
}

void Circulo::dibuja()
{
	putColor();
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	gluDisk(q, 0,radius,Lados,15);
	glPopMatrix();
}

Esfera::Esfera(GLfloat R) :ObjetoCuadrico(), radius(R)
{
}

Esfera::~Esfera()
{
}

void Esfera::dibuja()
{
	putColor();
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	gluSphere(q, radius, 15, 15);
	glPopMatrix();
}


