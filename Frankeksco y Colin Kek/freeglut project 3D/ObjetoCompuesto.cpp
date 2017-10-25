#include "ObjetoCompuesto.h"


ObjetoCompuesto::ObjetoCompuesto():Objeto3D()
{
	hijos = new Objeto3D*[100];
}


ObjetoCompuesto::~ObjetoCompuesto()
{
}

void ObjetoCompuesto::dibuja() {
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glMultMatrixf(this->mT->m);
	for (int i = 0; i<numHijos; i++)
		if (hijos[i])
			hijos[i]->dibuja();
	glPopMatrix();
}
void ObjetoCompuesto::introduceObjeto(Objeto3D* objeto) {
	hijos[numHijos] = objeto;
	numHijos++; 
}


