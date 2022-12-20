#include "sky.h"

void Sky::cloud(int x, int y)
{
    glPushMatrix();

    glTranslated(x, y, 0);

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2d(30, 550);
    glVertex2d(60, 550);
    glVertex2d(60, 570);
    glVertex2d(30, 570);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2d(50, 580);
    glVertex2d(50, 558);
    glVertex2d(85, 558);
    glVertex2d(85, 580);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2d(75, 550);
    glVertex2d(75, 570);
    glVertex2d(100, 570);
    glVertex2d(100, 550);
    glEnd();

    glPopMatrix();
}


void Sky::sun(int x, int y){
    glPushMatrix();
    glTranslated(x, y, 0);
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslated(550, 550, 0);
    gluDisk(Sky::sun_obj, 0, 35, 300, 270);
    glTranslated(-300, -315, 0);
    glEnd();
    glPopMatrix();
}