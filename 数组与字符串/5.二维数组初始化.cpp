#include <iostream>

using namespace std;

int main()
{
	//���г�ʼ��
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

	//˳���ʼ��
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

	//���г�ʼ������Ԫ��
	int a3[3][4] = { {1,2,3,4},{5,6},{9,10,11} };
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << a3[i][j] << " \t";
		}
	}

	//˳���ʼ������Ԫ��
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