#include "screens.hpp"

void MainMenuScreen() {
	// glLineWidth(10);
	// glColor3f(1,0,0);
	// glBegin(GL_LINE_LOOP);               //Border
	// 	glVertex2f(-750 ,-500);
	// 	glVertex2f(-750 ,550);
	// 	glVertex2f(750 ,550);
	// 	glVertex2f(750 ,-500);
	// glEnd();


	// glLineWidth(1);
	// glColor3f(1, 1, 0);
	// glBegin(GL_POLYGON);				//START GAME PLOYGON
	// 	glVertex2f(-200 ,300);
	// 	glVertex2f(-200 ,400);
	// 	glVertex2f(200 ,400);
	// 	glVertex2f(200 ,300);
	// glEnd();

	// glBegin(GL_POLYGON);				//INSTRUCTIONS POLYGON
	// 	glVertex2f(-200, 50);
	// 	glVertex2f(-200 ,150);
	// 	glVertex2f(200 ,150);
	// 	glVertex2f(200 ,50);
	// glEnd();

	// glBegin(GL_POLYGON);				//QUIT POLYGON
	// 	glVertex2f(-200 ,-200);
	// 	glVertex2f(-200 ,-100);
	// 	glVertex2f(200, -100);
	// 	glVertex2f(200, -200);
	// glEnd();

	// if(mouseX>=-100 && mouseX<=100 && mouseY>=150 && mouseY<=200){
	// 	glColor3f(0 ,0 ,1) ;
	// 	if(mButtonPressed){
	// 		alienLife1 = alienLife2 = 100;
	// 		viewPage = GAME;
	// 		mButtonPressed = false;
	// 	}
	// } else {
	// 	glColor3f(0 , 0, 0);
  // }
	// displayRasterText(-100 ,340 ,0.4 ,"Start Game");

	// if(mouseX>=-100 && mouseX<=100 && mouseY>=30 && mouseY<=80) {
	// 	glColor3f(0 ,0 ,1);
	// 	if(mButtonPressed){
	// 		viewPage = INSTRUCTIONS;
	// 		printf("button pressed bitch\n");
	// 		mButtonPressed = false;
	// 	}
	// } else {
	// 	glColor3f(0 , 0, 0);
  // }
	// displayRasterText(-120 ,80 ,0.4 ,"Instructions");

	// if(mouseX>=-100 && mouseX<=100 && mouseY>=-90 && mouseY<=-40) {
	// 	glColor3f(0 ,0 ,1);
	// 	if(mButtonPressed){
	// 		mButtonPressed = false;
	// 		exit(0);
	// 	}
	// }
	// else {
	// 	glColor3f(0 , 0, 0);
  // }
	// displayRasterText(-100 ,-170 ,0.4 ,"    Quit");

	// glutPostRedisplay();
}


void IntroScreen()
{
	glClear(GL_COLOR_BUFFER_BIT);



	glFlush();
	glutSwapBuffers();
}

void InstructionsScreen()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1, 0, 0);


	glFlush();
	glutSwapBuffers();
}

void GameScreen() // unhandeled
{

	// DisplayHealthBar(-1100, 500);
	// glScalef(2, 2 ,0);

	// if(alienLife1 > 0){
	// 	SpaceshipCreate(xOne, yOne, true);
	// 	if(laser1) {
	// 		DrawLaser(xOne, yOne, laser1Dir);
	// 		checkLaserContact(xOne, yOne, laser1Dir, -xTwo, yTwo, true);
	// 	}
	// }
	// else {
	// 	viewPage = GAMEOVER;
	// }

	// if(alienLife2 > 0) {
	// 	glPushMatrix();
	// 	glScalef(-1, 1, 1);
	// 	SpaceshipCreate(xTwo, yTwo, false);
	// 	if(laser2) {
	// 		DrawLaser(xTwo, yTwo, laser2Dir);
	// 		checkLaserContact(xTwo, yTwo, laser2Dir, -xOne, yOne, false);
	// 	}
	// 	glPopMatrix();
	// }
	// else {
	// 	viewPage = GAMEOVER;
	// }

	// if(viewPage == GAMEOVER) {
	// 	xOne = xTwo = 500;
	// 	yOne = yTwo = 0;
	// }
}

void GameOverScreen() {

}