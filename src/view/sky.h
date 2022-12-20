#include <GL/glut.h>

class Sky {
  private: 
    GLUquadricObj* sun_obj = gluNewQuadric();
  public: 
    void cloud(int x, int y);
    void sun(int x, int y);
};