#include "main.hpp"

void introScreen();
void menuScreen();
void instructionsScreenDisplay();
void gameScreen();


void menuScreen() {

	glLineWidth(10);
	glColor3f(1,0,0);
	glBegin(GL_LINE_LOOP);               //Border
		glVertex2f(-750 ,-500);
		glVertex2f(-750 ,550);
		glVertex2f(750 ,550);
		glVertex2f(750 ,-500);
	glEnd();


	glLineWidth(1);
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);				//START GAME PLOYGON
		glVertex2f(-200 ,300);
		glVertex2f(-200 ,400);
		glVertex2f(200 ,400);
		glVertex2f(200 ,300);
	glEnd();

	glBegin(GL_POLYGON);				//INSTRUCTIONS POLYGON
		glVertex2f(-200, 50);
		glVertex2f(-200 ,150);
		glVertex2f(200 ,150);
		glVertex2f(200 ,50);
	glEnd();

	glBegin(GL_POLYGON);				//QUIT POLYGON
		glVertex2f(-200 ,-200);
		glVertex2f(-200 ,-100);
		glVertex2f(200, -100);
		glVertex2f(200, -200);
	glEnd();

	if(mouseX>=-100 && mouseX<=100 && mouseY>=150 && mouseY<=200){
		glColor3f(0 ,0 ,1) ;
		if(mButtonPressed){
			alienLife1 = alienLife2 = 100;
			viewPage = GAME;
			mButtonPressed = false;
		}
	} else {
		glColor3f(0 , 0, 0);
  }
	displayRasterText(-100 ,340 ,0.4 ,"Start Game");

	if(mouseX>=-100 && mouseX<=100 && mouseY>=30 && mouseY<=80) {
		glColor3f(0 ,0 ,1);
		if(mButtonPressed){
			viewPage = INSTRUCTIONS;
			printf("button pressed bitch\n");
			mButtonPressed = false;
		}
	} else {
		glColor3f(0 , 0, 0);
  }
	displayRasterText(-120 ,80 ,0.4 ,"Instructions");

	if(mouseX>=-100 && mouseX<=100 && mouseY>=-90 && mouseY<=-40) {
		glColor3f(0 ,0 ,1);
		if(mButtonPressed){
			mButtonPressed = false;
			exit(0);
		}
	}
	else {
		glColor3f(0 , 0, 0);
  }
	displayRasterText(-100 ,-170 ,0.4 ,"    Quit");

	glutPostRedisplay();
}


void introScreen()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	displayRasterText(-425, 490, 0.0,"CANADIAN INTERNATIONAL COLLAGE");

	glColor3f(1.0, 0.0, 1.0);
	displayRasterText(-125, 225, 0.0,"CIC ZOMBIE GAME");

	glColor3f(1.0, 0.7, 0.8);
	displayRasterText(-100, 150, 0.0,"CREATED BY: ");

	glColor3f(1.0, 1.0, 1.0);
	displayRasterText(-130, 80, 0.0,"NULLLESS TEAM");

	glColor3f(1.0, 0.0, 0.0);
	displayRasterText(-800, -100, 0.0," STUDENT TEAM");

	glColor3f(1.0, 1.0, 1.0);
	displayRasterText(-800, -200, 0.0," MUHAMMAD HAMDY\n20200237 ");
	displayRasterText(-800, -240, 0.0," BASSIL KHALED\n20200036 ");
	displayRasterText(-800, -285, 0.0," MOHAMED BANHAWY ");

	glColor3f(1.0, 0.0, 0.0);
	displayRasterText(-250, -400, 0.0,"2022");

	glColor3f(1.0, 1.0, 1.0);
	displayRasterText(-300, -550, 0.0,"PRESS ENTER TO START");

	glFlush();
	glutSwapBuffers();
}

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

void gameScreen() // unhandeled
{
	DisplayHealthBar1();
	DisplayHealthBar2();
	glScalef(2, 2 ,0);

	if(alienLife1 > 0){
		SpaceshipCreate(xOne, yOne, true);
		if(laser1) {
			DrawLaser(xOne, yOne, laser1Dir);
			checkLaserContact(xOne, yOne, laser1Dir, -xTwo, yTwo, true);
		}
	}
	else {
		viewPage = GAMEOVER;
	}

	if(alienLife2 > 0) {
		glPushMatrix();
		glScalef(-1, 1, 1);
		SpaceshipCreate(xTwo, yTwo, false);
		if(laser2) {
			DrawLaser(xTwo, yTwo, laser2Dir);
			checkLaserContact(xTwo, yTwo, laser2Dir, -xOne, yOne, false);
		}
		glPopMatrix();
	}
	else {
		viewPage = GAMEOVER;
	}

	if(viewPage == GAMEOVER) {
		xOne = xTwo = 500;
		yOne = yTwo = 0;
	}
}