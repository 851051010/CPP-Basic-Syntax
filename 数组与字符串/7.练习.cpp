#include <iostream>

using namespace std;

int main()
{
	/*
		矩阵相加
		a1代表的矩阵 + a2代表的矩阵 结果放在a3中。
	*/

	int a1[2][3] = { 1, 2, 3, 4, 5, 6 };
	int a2[2][3] = { 11, 12, 13, 14, 15, 16 };
	int a3[2][3] = { };

	//相加
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a3[i][j] = a1[i][j] + a2[i][j];
		}
	}

	//遍历a3数组
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a3[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}