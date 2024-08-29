#include <iostream>

using namespace std;

// 定义联合类型,最好不要用，容易出错
union MyData
{
	int i;
	char c;
	float f;
};

int main()
{
	// 联合类型占用的空间由成员中占用空间最大的类型决定
	cout << "sizeof(MyData): " << sizeof(MyData) << endl;  
	// sizeof(MyData): 4

	// 定义联合变量
	MyData md;

	// 联合变量多个成员使用同一内存空间
	md.i = 98;
	cout << "md.c: " << md.c << "  md.i: " << md.i<<  endl;
	// md.c: b  md.i: 98
	md.c = 'a';
	cout << "md.c: " << md.c << "  md.i: " << md.i<< "  md.f: " << md.f << endl;
	// md.a: b  md.i: 32610  md.f: 4.56963e-41  ,结果就会出问题
	md.f = 99;
	cout << "md.c: " << md.c << "  md.i: " << md.i << "  md.f: " << md.f << endl;
	// md.c:   md.i: 1120272384  md.f: 99

	return 0;
}