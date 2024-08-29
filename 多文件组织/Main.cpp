#include <iostream>
#include "Point.h"  //�����Լ�д��ͷ�ļ���Ҫ�� "" ˫����
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Point point = { 1, 1 };
	Rectangle r = { {0,0}, 3, 2 };   // ���� {0,0} ����ֱ��Щ���涨��� point

	cout << getArea(r) << endl;
	cout << getPerimeter(r) << endl;

	Circle c = { {10,10}, 3 };
	cout << getArea(c) << endl;
	cout << getPerimeter(c) << endl;

	cout << getDistance(r.center, c.center) << endl;

	return 0;
}