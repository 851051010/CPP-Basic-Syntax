#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

struct Rectangle
{
	Point center;   //矩形中心 直接使用 Point.h  头文件中的 Point
	int length;  //矩形的长
	int width;   //矩形的宽
};

// 函数声明,可以在导入这个头文件的cpp文件中实现
int getArea(Rectangle r);

int getPerimeter(Rectangle r);

#endif