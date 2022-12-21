#include <GL/glut.h>

void player(int x = 0, int y = 0);
void player(int x = 0, int y = 0) {

    GLUquadricObj* head = gluNewQuadric();
    GLUquadricObj* hand = gluNewQuadric();

    glPushMatrix();

    glTranslated(x, y, 0); // init position

    //--------------- body --------------- //  
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(265, 160);
    glVertex2f(265, 270);
    glVertex2f(335, 270);
    glVertex2f(335, 160);
    glEnd();
    glPopMatrix();
    //--------------- nick --------------- //  
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.7, 0.5);
    glVertex2f(290, 270);
    glVertex2f(290, 290);
    glVertex2f(310, 290);
    glVertex2f(310, 270);
    glEnd();
    glPopMatrix();
    //--------------- head --------------- //  
    glPushMatrix();
    glColor3f(0.8, 0.7, 0.5);
    glTranslated(300, 315, 0);
    gluDisk(head, 0, 35, 300, 270);
    glTranslated(-300, -315, 0);
    glEnd();
    glPopMatrix();
    //--------------- right-arm --------------- //  
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(350, 230);
    glVertex2f(335, 245);
    glVertex2f(335, 270);
    glVertex2f(370, 240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(350, 240);
    glVertex2f(345, 180);
    glVertex2f(350, 180);
    glVertex2f(370, 240);
    glEnd();
    glPopMatrix();
    //--------------- left-arm --------------- //  
    glPushMatrix();
    glTranslated(300, 300, 0);
    glScaled(-1, 1, 1);
    glTranslated(-300, -300, 0);
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(350, 230);
    glVertex2f(335, 245);
    glVertex2f(335, 270);
    glVertex2f(370, 240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(350, 240);
    glVertex2f(345, 180);
    glVertex2f(350, 180);
    glVertex2f(370, 240);
    glEnd();
    glPopMatrix();
    //--------------- right-hand --------------- //  
    glPushMatrix();
    glColor3f(0.8, 0.7, 0.5);
    glBegin(GL_QUADS);
    glVertex2f(340, 170);
    glVertex2f(351, 180);
    glVertex2f(344, 180);
    glVertex2f(345, 170);
    glEnd();
    glPopMatrix();
    //--------------- left-hand --------------- //  
    glPushMatrix();
    glTranslated(300, 300, 0);
    glScaled(-1, 1, 1);
    glTranslated(-300, -300, 0);
    glColor3f(0.8, 0.7, 0.5);
    glBegin(GL_QUADS);
    glVertex2f(340, 170);
    glVertex2f(351, 180);
    glVertex2f(344, 180);
    glVertex2f(345, 170);
    glEnd();
    glPopMatrix();
    //--------------- left-leg --------------- //  
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(265, 160);
    glVertex2f(265, 130);
    glVertex2f(290, 130);
    glVertex2f(297, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(270, 90);
    glVertex2f(265, 130);
    glVertex2f(290, 130);
    glVertex2f(290, 90);
    glEnd();
    glPopMatrix();
    //--------------- right-leg --------------- //  
    glPushMatrix();
    glTranslated(300, 300, 0);
    glScaled(-1, 1, 1);
    glTranslated(-300, -300, 0);

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(265, 160);
    glVertex2f(265, 130);
    glVertex2f(290, 130);
    glVertex2f(297, 160);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(270, 90);
    glVertex2f(265, 130);
    glVertex2f(290, 130);
    glVertex2f(290, 90);
    glEnd();

    glPopMatrix();
    //--------------- left-shoes --------------- //  
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.0f, 0.0f); //Brown
    glVertex2f(264, 90);
    glVertex2f(264, 80);
    glVertex2f(290, 80);
    glVertex2f(290, 90);
    glEnd();
    glPopMatrix();
    //--------------- right-shoes --------------- //  
    glPushMatrix();
    glTranslated(300, 300, 0);
    glScaled(-1, 1, 1);
    glTranslated(-300, -300, 0);
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.0f, 0.0f); //Brown
    glVertex2f(264, 90);
    glVertex2f(264, 80);
    glVertex2f(290, 80);
    glVertex2f(290, 90);
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glFlush();
}

void Player::move(int move_x, int move_y) {
    x += move_x;
    y += move_y;
    glutPostRedisplay();
}