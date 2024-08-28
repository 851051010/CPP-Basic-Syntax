#include <iostream>

using namespace std;

int main()
{
	cout << "输出能被第一个3整除的数字之前的数字" << endl;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			break;
		}
		cout << i << " ";
	}
	cout << endl << endl;

	cout << "输出不能被3整除的数字" << endl;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		cout << i << " ";
	}

	return 0;
}