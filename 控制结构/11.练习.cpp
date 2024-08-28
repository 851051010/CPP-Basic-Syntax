#include <iostream>

using namespace std;

int main()
{
	/*
		输入若干个整数（多次输入，每次输入一个整数）
		若是偶数，则输出是偶数；若是奇数，则输出是奇数。
		若是 0，则退出。
	*/
	while (true)
	{
		int num;

		cout << "请输入一个数字：";
		cin >> num;

		if (num == 0)
		{
			cout << "已退出。" << endl << endl;
			break;
		}
		else if (num % 2 == 0)
		{
			cout << "你输入的是偶数。" << endl << endl;
		}
		else
		{
			cout << "你输入的是奇数。" << endl << endl;
		}
	}

	return 0;
}
