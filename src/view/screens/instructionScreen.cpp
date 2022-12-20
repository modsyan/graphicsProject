#include "instructionScreen.h"

void instructionsScreenDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//SetDisplayMode(MENU_SCREEN);
	//colorBackground();
	glColor3f(1, 0, 0);
	displayRasterText(-900 ,550 ,0.4 ,"INSTRUCTIONS");
    glColor3f(1, 0, 0);
	displayRasterText(-1000 ,400 ,0.4 ,"PLAYER 1");
	displayRasterText(200 ,400 ,0.4 ,"PLAYER 2");
	glColor3f(1, 1, 1);
	displayRasterText(-1100 ,300 ,0.4 ,"Key 'w' to move up.");
	displayRasterText(-1100 ,200 ,0.4 ,"Key 's' to move down.");
	displayRasterText(-1100 ,100 ,0.4 ,"Key 'd' to move right.");
	displayRasterText(-1100 ,0 ,0.4 ,"Key 'a' to move left.");
	displayRasterText(100 ,300 ,0.4 ,"Key 'i' to move up.");
    displayRasterText(100 ,200 ,0.4 ,"Key 'k' to move down.");
    displayRasterText(100 ,100 ,0.4 ,"Key 'j' to move right.");
    displayRasterText(100 ,0 ,0.4 ,"Key 'l' to move left.");
	displayRasterText(-1100 ,-100 ,0.4 ,"Key 'c' to shoot, Use 'w' and 's' to change direction.");
	displayRasterText(100 ,-100 ,0.4 ,"Key 'm' to shoot, Use 'i' and 'k' to change direction.");
	//displayRasterText(-1100 ,-100 ,0.4 ,"The packet can be placed only when 's' is pressed before.");
	displayRasterText(-1100, -300,0.4,"The Objective is to kill your opponent.");
	displayRasterText(-1100 ,-370 ,0.4 ,"Each time a player gets shot, LIFE decreases by 5 points.");
	backButton();
	//if(previousScreen)
	//	nextScreen = false ,previousScreen = false; //as set by backButton()
}