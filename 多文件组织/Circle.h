#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

struct Circle
{
	Point center;
	int radius;  // �뾶
};

// Բ���ܳ�
int getPerimeter(Circle r);

// Բ�����
int getArea(Circle r);

#endif
