#include <iostream>

using namespace std;

int main()
{
	//定义三行五列的整型数组
	int a[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//a[i][j]为第i行第j列的元素
			a[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << " \t";
		}
	}

	return 0;
}