#include <GL/glut.h>

void cloud(int x, int y);
void sun(int x, int y);
void tree1(int x, int y);

void cloud(int x, int y)
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


void sun(int x, int y){
    GLUquadricObj* sun_obj = gluNewQuadric();
    glPushMatrix();
    glTranslated(x, y, 0);
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslated(550, 550, 0);
    gluDisk(sun_obj, 0, 35, 300, 270);
    glTranslated(-300, -315, 0);
    glEnd();
    glPopMatrix();
}

void tree1(int x, int y)
{
    GLUquadricObj* head = gluNewQuadric();
    GLUquadricObj* hand = gluNewQuadric();

    //--------------- tree1 --------------- //
    glPushMatrix();
    
    glTranslated(x, y, 0);
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.0f, 0.0f);
    glVertex2f(265, 300);
    glVertex2f(265, 100);
    glVertex2f(300, 100);
    glVertex2f(300, 300);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0f, 1.0f, 0.0f);
    glTranslated(250, 250, 0);
    gluDisk(head, 0, 35, 300, 270);
    glTranslated(-300, -315, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0f, 1.0f, 0.0f);
    glTranslated(310, 250, 0);
    gluDisk(head, 0, 35, 300, 270);
    glTranslated(-300, -315, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0f, 1.0f, 0.0f);
    glTranslated(280, 300, 0);
    gluDisk(head, 0, 35, 300, 270);
    glTranslated(-300, -315, 0);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    glFlush();
}