#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

struct Rectangle
{
	Point center;   //�������� ֱ��ʹ�� Point.h  ͷ�ļ��е� Point
	int length;  //���εĳ�
	int width;   //���εĿ�
};

// ��������,�����ڵ������ͷ�ļ���cpp�ļ���ʵ��
int getArea(Rectangle r);

int getPerimeter(Rectangle r);

#endif