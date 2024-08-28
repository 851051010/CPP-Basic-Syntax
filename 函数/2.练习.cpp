#include <iostream>

using namespace std;


int myMax(int num1, int num2);
int myPower(int n);

int main()
{
	int a, b;
	cout << "请输入两个数字：";
	cin >> a >> b;
	cout << "最大数为："<< myMax(a, b) << endl;

	int n;
	cout << "请输入要算的阶乘：";
	cin >> n;
	cout << "阶乘为：" << myPower(n) << endl;

	return 0;
}

// 编写函数求两个数中的较大值
int myMax(int num1, int num2) {
	if (num1 < num2)
	{
		return num2;
	}
	return num1;
}

// 计算n的阶乘
int myPower(int n)
{
	int sum=1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}	
	return sum;
}