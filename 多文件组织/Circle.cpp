#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"


// 圆的周长
int getPerimeter(Circle r)
{
	return  2 * M_PI * r.radius;
}

// 圆的面积
int getArea(Circle r)
{
	return r.radius * r.radius * M_PI;
}
