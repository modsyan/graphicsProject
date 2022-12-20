#include "introScreen.h"

void introScreen()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	displayRasterText(-425, 490, 0.0,"CANADIAN INTERNATIONAL COLLAGE");

	glColor3f(1.0, 0.0, 1.0);
	displayRasterText(-125, 225, 0.0,"CIC ZOMBIE GAME");

	glColor3f(1.0, 0.7, 0.8);
	displayRasterText(-100, 150, 0.0,"CREATED BY: ");

	glColor3f(1.0, 1.0, 1.0);
	displayRasterText(-130, 80, 0.0,"NULLLESS TEAM");

	glColor3f(1.0, 0.0, 0.0);
	displayRasterText(-800, -100, 0.0," STUDENT TEAM");

	glColor3f(1.0, 1.0, 1.0);
	displayRasterText(-800, -200, 0.0," MUHAMMAD HAMDY\n20200237 ");
	displayRasterText(-800, -240, 0.0," BASSIL KHALED\n20200036 ");
	displayRasterText(-800, -285, 0.0," MOHAMED BANHAWY ");

	glColor3f(1.0, 0.0, 0.0);
	displayRasterText(-250, -400, 0.0,"2022");

	glColor3f(1.0, 1.0, 1.0);
	displayRasterText(-300, -550, 0.0,"PRESS ENTER TO START");

	glFlush();
	glutSwapBuffers();
}