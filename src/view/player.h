#include <GL/glut.h>

class Player {
  GLUquadricObj* head;
  GLUquadricObj* hand;
  private:
    int x;
    int y;

  public: 
    Player(int x = 0, int y = 0);
    void move(int move_x, int move_y);
};