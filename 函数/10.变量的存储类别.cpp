#include <iostream>

using namespace std;

int func(int n)
{
	// 定义静态变量 f ，static 关键字可以把变量定义为静态存储方式。
	static	int f = 1;
	f *= n;
	return f;
}

int main()
{
	cout << func(2) << endl;  // 2
	cout << func(3) << endl;  // 6
	cout << func(4) << endl;  // 24

	return 0;
}