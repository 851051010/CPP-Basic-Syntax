#include <iostream>

using namespace std;

int main()
{
	const int mme = 5;
	//定义长度为5的整型数组
	int a[mme], sum = 0;  //数组的长度必须是常量，可是值常量或符号常量

	cout << "sizeof(a):" << sizeof(a) << endl;
	//数组的下标从0开始
	a[0] = 60;
	a[1] = 75;
	a[2] = 80;
	a[3] = 90;
	a[4] = 100;

	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += a[i];
	}
	cout << "sum:" << sum << endl;

	//用数组名下标访问数组元素并输出
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " " << endl;
	}

	return 0;
}