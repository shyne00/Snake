#include "Box.h"

Box::Box() {
	setPos(0, 0);
	setColor(WHITE);
}
Box::Box(float x, float y) {
	setPos(x, y);
	setColor(WHITE);
}

void Box::drawBox(){
	if (color == WHITE)
		glColor3f(1, 1, 1);
	else if (color == RED)
		glColor3f(1, 0, 0);
	else
		glColor3f(0, 1, 0);

	glBegin(GL_QUADS);
	glVertex2f(pos[0], pos[1]); glVertex2f(pos[0], pos[1]+1);
	glVertex2f(pos[0]+1, pos[1]+1); glVertex2f(pos[0]+1, pos[1]);
	glEnd();
}

void Box::setColor(Color col) {
	color = col;
}

void Box::setPos(const float x, const float y) {
	pos[0] = x;
	pos[1] = y;
}
float Box::getPosX() {
	return pos[0];
}
float Box::getPosY() {
	return pos[1];
}