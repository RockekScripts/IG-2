#include "ObjetoCompuesto.h"


ObjetoCompuesto::ObjetoCompuesto()
{
}


ObjetoCompuesto::~ObjetoCompuesto()
{
}

void ObjetoCompuesto::dibuja() {
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
/*	glMultMatrix(this->mT->m);
	for (int i = 0; i<numHijos; i++)
		hijo[i]->dibuja();*/
	glPopMatrix();
}