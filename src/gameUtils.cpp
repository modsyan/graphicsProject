#include "gameUtils.hpp"

void DisplayHealthBar(int x, int y) {
	char temp1[40];
	glColor3f(1 ,1 ,1);
	sprintf(temp1, "  LIFE ❤ %d", playerHealth);
	displayRasterText(x ,y ,0.4 ,temp1);
	glColor3f(1 ,0 ,0);
}