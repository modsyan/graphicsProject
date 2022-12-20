void tree1()
{
    GLUquadricObj* head = gluNewQuadric();
    GLUquadricObj* hand = gluNewQuadric();

    //--------------- tree1 --------------- //
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

    glFlush();
}