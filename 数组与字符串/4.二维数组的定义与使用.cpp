#include <iostream>

using namespace std;

int main()
{
	//�����������е���������
	int a[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//a[i][j]Ϊ��i�е�j�е�Ԫ��
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