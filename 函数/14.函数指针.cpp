#include <iostream>

using namespace std;

int myAdd(int x, int y);
int mySub(int x, int y);

int main()
{	
	// 函数名就是函数的首字节的地址
	cout << myAdd << endl;  // 00007FF684CB1113
	
	// 定义函数指针，用于指向具有两个 int 型参数，并返回 int 型参数的函数
	int (*fp)(int, int);

	// 函数指针fp指向myAdd函数
	fp = myAdd;
	
	// 使用函数指针调用函数
	cout << fp(1, 1) << endl; // 2

	fp = mySub;
	cout << fp(1, 1) << endl; // 0

	return 0;
}

int myAdd(int x, int y)
{
	return x + y;
}

int mySub(int x, int y)
{
	return x - y;
}