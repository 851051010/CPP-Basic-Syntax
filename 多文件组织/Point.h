#ifndef POINT_H
#define POINT_H

/*
	�������룺
	#ifndef ��ʶ��
	�����1
	#else
	�����2
	#endif
*/

struct Point
{
	int x;
	int y;
};

//  ��������֮��ľ���
float getDistance(Point point1, Point point2);

#endif