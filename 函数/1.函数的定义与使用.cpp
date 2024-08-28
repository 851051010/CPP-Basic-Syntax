#include <iostream>
using namespace std;

// 函数的声明
int mySum(int n);
void test();

/*
	函数定义：
		函数头由函数类型，函数名和参数组成，称为函数头。函数名遵守标识符命名规范。
		由两个大括号括起来的语句组，称为函数体。
	函数类型与返回值：
		函数类型就是返回值的类型，可以是 C++ 支持的任意类型。
		函数的返回值由函数中的 return 语句给出。
		函数可以有返回值，也可以没有返回值。没有返回值时，函数类型为 void 
	函数参数：
		形参，定义函数时括号中的参数。
		实参，调用函数时括号中的参数。
*/

int main()
{
	// 调用函数
	int s = mySum(5);  // 5是实参，也可以用变量
	cout << "s:" << s << endl;

	test();    //test没有形参，调用时不需要传入实参

	return 0;
}

// 计算1到n的和
int mySum(int n)  // n是形参
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;  // 返回变量sum，函数类型是int。
}

void test()
{
	cout << "我不会返回任何值，我的类型是void" << endl;
}