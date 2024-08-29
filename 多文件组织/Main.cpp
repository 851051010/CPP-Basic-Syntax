#include <iostream>
#include "Point.h"  //导入自己写的头文件需要用 "" 双引号
#include "Rectangle.h"

using namespace std;

int main()
{
	Point point = { 1, 1 };
	Rectangle r = { {0,0}, 3, 2 };   // 其中 {0,0} 可以直接些上面定义的 point

	cout << getArea(r) << endl;
	cout << getPerimeter(r) << endl;

	return 0;
}