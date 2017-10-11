#include "ObjetoCompuesto.h"


ObjetoCompuesto::ObjetoCompuesto():Objeto3D()
{
}


ObjetoCompuesto::~ObjetoCompuesto()
{
}

void ObjetoCompuesto::dibuja() {
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	for (int i = 0; i<numHijos; i++)
		hijos[i]->dibuja();
	glPopMatrix();
}
void ObjetoCompuesto::introduceObjeto(Objeto3D* objeto) {
	numHijos++;//cambiar 
	hijos[numHijos - 1] = objeto;
}


