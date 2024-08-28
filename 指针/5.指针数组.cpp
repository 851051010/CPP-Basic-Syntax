#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 20, c = 30;
	//定义长度为3的int指针数组
	int* p[3] = { &a, &b, &c };
	cout << "sizeof(p):" << sizeof(p) << endl;  // sizeof(p):24
	//通过int指针数组给int型变量赋值
	for (int i = 0; i < 3; i++)
	{
		*p[i] += 1;
	}
	cout << "a:" << a << " b:" << b << " c:" << c << endl; 
	// 结果：a:11 b:21 c:31

	return 0;
}