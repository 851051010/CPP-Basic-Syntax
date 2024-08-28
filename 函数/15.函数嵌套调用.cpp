#include <iostream>

using namespace std;

// 多个阶乘结果求和
int f1(int n);

// 计算n的阶乘
int f2(int n);

int main()
{
	cout << f1(4) << endl;
	return 0;
}

int f1(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += f2(i);
	}
	return sum;
}

int f2(int n)
{
	int m = 1;
	for (int i = 1; i <= n; i++)
	{
		m *= i;
	}
	return m;
}