#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

struct Circle
{
	Point center;
	int radius;  // 半径
};

// 圆的周长
int getPerimeter(Circle r);

// 圆的面积
int getArea(Circle r);

#endif
