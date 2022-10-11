#include "Cube.h"

void Cube::Render() {
	glPushMatrix();
	glTranslatef(getPos().getX(),getPos().getY(),getPos().getZ());
	glColor3f(getColor().getR(),getColor().getG(),getColor().getB());
	glRotatef(getOrientation().getX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getZ(), 0.0, 0.0, 1.0);
	glutSolidCube(this->GetSize());
	glPopMatrix();
}