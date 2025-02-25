#include "../include/point.h"
#include "../include/screen.h"
#include <stdio.h>

Screen initScreen(int w, int h)
{
	Screen scr = { w, h, false };
	return scr;
}

void powerOnScreen(Screen* scr)
{
	if (!scr->isOn)
	{
		scr->isOn = true;
		puts("Ecran allume");
	}
}

void powerOffScreen(Screen* scr)
{
	if (scr->isOn)
	{
		scr->isOn = false;
		puts("Ecran eteint");
	}
}

void drawPointOnScreen(Screen* scr, Point* pt)
{
	if (pt->x > 0 && pt->x < scr.width && pt->y > 0 && pt->y <scr->height)
		printf("Le point est dessin� aux coordonn�es (%d, %d) de l'�cran\n", pt->x, pt->y );