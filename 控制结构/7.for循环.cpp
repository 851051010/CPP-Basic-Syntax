#include <iostream>

using namespace std;

int main()
{
	/*
		计算1-100 直接的累加
		int sum = 0;
		sum += 1;
		sum += 2;
		....
		sum += 100;

		for 循环
		for(表达式1;表达式2;表达式3)
		{
			循环体语句组		
		}
		表达式1用于为循环变量赋初值；
		表达式2为循环条件，若表达式2为真，则执行循环体中的语句，否则退出循环。
		表达式3用于改变循环变。
	*/

	int sum = 0;
	int i = 100000;  //这个i不影响下面的i，不在一个作用域
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}

	cout << "sum:" << sum << endl;


	//输出1-50之间能被三整除的数字
	cout << "1-50之间能被三整除的数字:" ;
	for (int i = 1; i <= 50; i++)
	{
		if (i % 3 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	// 循环步长不一定是1
	cout << "1-50之间能被三整除的数字:";
	for (int i = 3; i <= 50; i += 3)
	{
			cout << i << " ";
	}
	cout << endl;

	//也不一定是递增
	cout << "1-50之间能被三整除的数字:";
	for (int i = 48; i >= 3; i -= 3)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}