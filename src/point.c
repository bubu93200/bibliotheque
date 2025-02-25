#include "../include/color.h"
#include "../include/point.h"
#include <stdio.h>

Point createPoint(int x, int y, Color* c)
{
	Point pt = { *c, x, y };
	return pt;
}