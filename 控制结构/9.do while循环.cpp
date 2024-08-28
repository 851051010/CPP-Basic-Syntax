#include <iostream>

using namespace std;

int main()
{
	// 计算1-100 之间的累加。
	int sum = 0, i = 10000;
	//do while 循环先执行循环再判断循环条件
	do
	{
		sum += i++;
	} while (i <= 100);
	
	cout << "sum：" << sum << endl;
	return 0;
}