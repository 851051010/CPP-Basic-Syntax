#ifndef POINT_H
#define POINT_H

/*
	条件编译：
	#ifndef 标识符
	程序段1
	#else
	程序段2
	#endif
*/

struct Point
{
	int x;
	int y;
};

//  计算两点之间的距离
float getDistance(Point point1, Point point2);

#endif