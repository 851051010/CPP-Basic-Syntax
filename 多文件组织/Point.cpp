#include"Point.h"
#include <cmath> // ��ѧ������غ���������cmath����

float getDistance(Point point1, Point point2)
{
	int x = pow(point1.x - point2.x, 2);
	int y = pow(point1.y - point2.y, 2);
	return sqrt(x + y);
}