// Cours de Jason Champagne : Formationvideo - bibliothèque dynamique - https://www.youtube.com/watch?v=pKOJFZN_HUk
// 
// Programme principal

#include "../include/point.h"
#include "../include/screen.h"
#include <stdio.h>

int main(void) 
{
	Screen sc = initScreen(1920, 1080);
	powerOnScreen(&sc);

	Color pixelColor = BLUE;
	Point p = createPoint(10, 10, &pixelColor);
	drawPointOnScreen(&sc, &p);

	powerOffScreen(&sc);
	return 0;
}