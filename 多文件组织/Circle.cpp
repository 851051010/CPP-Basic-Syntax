#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"


// Բ���ܳ�
int getPerimeter(Circle r)
{
	return  2 * M_PI * r.radius;
}

// Բ�����
int getArea(Circle r)
{
	return r.radius * r.radius * M_PI;
}
