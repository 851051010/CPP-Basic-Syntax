#include <iostream>

using namespace std;

int main()
{
	//计算1-100 之间的累加
	int sum = 0;

	int i = 1;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	cout << "sum:" << sum << endl;

	//使用 while 计算n的阶乘	
	int n,z=1;
	cout << "想要求几的阶乘：";
	cin >> n;

	i = 1;
	while (i <= n)
	{
		z *= i;
		i++;
	}
	cout << "结果为：" << z << endl;


	return 0;
}