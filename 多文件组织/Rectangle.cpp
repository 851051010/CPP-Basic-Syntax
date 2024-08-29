#include "Rectangle.h"

int getArea(Rectangle r)
{
	return r.length * r.width;
}

int getPerimeter(Rectangle r)
{
	return (r.length + r.width) * 2;
}
