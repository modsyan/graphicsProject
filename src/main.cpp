#include "main.hpp"

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    // keyOperations();
    switch (viewPage) {
        case INTRO:
            IntroScreen();
            break;
        case MENU:
            MainMenuScreen();
            break;
        case INSTRUCTIONS:
            InstructionsScreen();
            break;
        case GAME:
            GameScreen();
            // reset scaling values
            // glScalef(1 / 2, 1 / 2, 0);
            break;
        case GAMEOVER:
            GameOverScreen();
            MainMenuScreen();
            break;
    }
    glLoadIdentity();
    glutSwapBuffers();
    glFlush();
}



int main(int argc, char** argr) {
    glutInit(&argc, argr);
    glutInitWindowSize(x_window, y_window);
    glutInitWindowPosition(0, 0);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("CIC Zombie Game");
    glutDisplayFunc(display);
    // glutReshapeFunc(reshape); //not working

    glutIdleFunc(glutPostRedisplay);
    // glutKeyboardFunc(keyPressed);
    // glutKeyboardUpFunc(keyReleased);
    // glutMouseFunc(mouseClick);
    // glutPassiveMotionFunc(passiveMotionFunc);

    glClearColor(0, 0, 0, 0);
    glColor3f(1, 0, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, x_window, 0, y_window);
    glLoadIdentity();
    gluOrtho2D(-x_window, x_window, -y_window, y_window);
    glMatrixMode(GL_MODELVIEW);
    glutMainLoop();
}
