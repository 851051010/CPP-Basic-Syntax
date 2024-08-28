#include <iostream>

using namespace std;

void mySwap(int& m, int& n);  // 引用作为参数

int main()
{
	// 引用作为参数传递的是变量的地址
	int a = 10, b = 20;
	mySwap(a, b);
	// a、b 的值交换了
	cout << "main a=" << a << "  b=" << b << endl;  //main a=20  b=10

	// mySwap(1, b);  引用作为参数时，实参必须是变量

	return 0;
}

// 形参m、n分别是实参a、b的别名；m、n的值发生变化，a、b的值也会发送变化
void mySwap(int& m, int& n)
{
	int temp = m;
	m = n;
	n = temp;
}