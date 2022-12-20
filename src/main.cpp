#include "main.h"


// void display_home() {
//     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//     glMatrixMode(GL_MODELVIEW);

//     glutSwapBuffers();
//     // glFlush();
// }

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
	//glClearColor(, 0 , 0, 1);
	keyOperations();
	glClear(GL_COLOR_BUFFER_BIT);

	switch (viewPage)
	{
		case INTRO:
			introScreen();
			break;
		case MENU:
			startScreenDisplay();
			break;
		case INSTRUCTIONS:
			instructionsScreenDisplay();
			break;
		case GAME:
			gameScreenDisplay();
			//reset scaling values
			glScalef(1/2 ,1/2 ,0);
			break;
		case GAMEOVER:
			displayGameOverMessage();
			startScreenDisplay();
			break;
	}

	glFlush();
	glLoadIdentity();
	glutSwapBuffers();
}

void reshape(GLsizei newwidth, GLsizei newheight) {
    glViewport(0, 0, x_window = newwidth, y_window = newheight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, x_window, y_window, 0.0, 0.0, 100.0);
    glMatrixMode(GL_MODELVIEW);

    glutPostRedisplay();
}



int main(int argc, char** argr) {
    glutInit(&argc, argr);
    glutInitWindowSize(x_window, y_window);
    glutInitWindowPosition(0, 0);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("CIC Zombie Game");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

	glutIdleFunc(glutPostRedisplay);
    glutKeyboardFunc(keyPressed);
	glutKeyboardUpFunc(keyReleased);
	glutMouseFunc(mouseClick);
	glutPassiveMotionFunc(passiveMotionFunc);

    glClearColor(0, 0, 0, 0);
	glColor3f(1,0,0);
	glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 600, 0, 600);
	glLoadIdentity();
    gluOrtho2D(-x_window,x_window,-y_window,y_window);
	glMatrixMode(GL_MODELVIEW);
    glutMainLoop();
}



