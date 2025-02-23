#ifndef __POINT__
	#define __POINT__
	#include "color.h"

	typedef struct Point
	{
		Color c;
		int x;
		int y;
	} Point;

	Point createPoint(intx, int y, Color* c);

#endif // !__POINT__
