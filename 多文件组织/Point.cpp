#include"Point.h"
#include <cmath> // 科学计算相关函数包含在cmath库中

float getDistance(Point point1, Point point2)
{
	int x = pow(point1.x - point2.x, 2);
	int y = pow(point1.y - point2.y, 2);
	return sqrt(x + y);
}