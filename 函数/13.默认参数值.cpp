#include <iostream>

using namespace std;

// 默认值可以在函数声明时给出
/*
	默认形参必须从左向右依次给出，如果某个参数有默认值，则其右侧的参数必须都要有默认值。
	double myPower(double m = 1.0, int n);   这样不允许。
*/
double myPower(double m, int n = 2);   // 设置n的默认值为2 

int main()
{
	cout << " myPower(2, 0)：" << myPower(2, 0) << endl;
	cout << " myPower(2, 2)：" << myPower(2, 2) << endl;
	cout << " myPower(3)：" << myPower(3) << endl;  // 使用默认值
	return 0;
}

// 求次方
double myPower(double m, int n)
{
	double  r = 1;
	for (int  i = 1; i <= n; i++)
	{
		r*= m;
	}
	return r;
}
