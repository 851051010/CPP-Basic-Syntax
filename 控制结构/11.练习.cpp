#include <iostream>

using namespace std;

int main()
{
	/*
		�������ɸ�������������룬ÿ������һ��������
		����ż�����������ż���������������������������
		���� 0�����˳���
	*/
	while (true)
	{
		int num;

		cout << "������һ�����֣�";
		cin >> num;

		if (num == 0)
		{
			cout << "���˳���" << endl << endl;
			break;
		}
		else if (num % 2 == 0)
		{
			cout << "���������ż����" << endl << endl;
		}
		else
		{
			cout << "���������������" << endl << endl;
		}
	}

	return 0;
}
