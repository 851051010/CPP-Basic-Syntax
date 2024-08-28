#include <iostream>

using namespace std;

int main()
{
	//分行初始化
	int a1[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << a1[i][j] << " \t";
		}
	}

	cout << endl;

	//顺序初始化
	int a2[3][4] = { 1,2,3,4,  5,6,7,8,  9,10,11,12 };
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << a2[i][j] << " \t";
		}
	}

	cout << endl;

	//分行初始化部分元素
	int a3[3][4] = { {1,2,3,4},{5,6},{9,10,11} };
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << a3[i][j] << " \t";
		}
	}

	//顺序初始化部分元素
	int a4[3][4] = { 1,2,3,4,5,6,9,10,11 };
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << a4[i][j] << " \t";
		}
	}

	return 0;
}