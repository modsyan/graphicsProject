#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <IL/il.h>
#include <math.h>

#include "view/player.h"
#include "view/sky.h"
#include "controllers/keyOperations.h"
#include "controllers/screenUtils.h"

// #include <irrKlang.h>
// using namespace irrKlang;


enum view {INTRO, MENU, INSTRUCTIONS, GAME};
view viewPage = INTRO;
bool direction[4] = {false};
bool laser1Direction[2] = {false};
bool laser2Direction[2] = {false};

int x_window = 1280;
int y_window = 1024;
