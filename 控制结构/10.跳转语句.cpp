#include <iostream>

using namespace std;

int main()
{
	cout << "����ܱ���һ��3����������֮ǰ������" << endl;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			break;
		}
		cout << i << " ";
	}
	cout << endl << endl;

	cout << "������ܱ�3����������" << endl;
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