#include <iostream>

using namespace std;

int main()
{
	/*
		ĳ����5��ѧ��������ÿ��ѧ�������ĳɼ�����ѧ�ɼ���ʹ�ö�ά����洢����
		Ȼ�����ÿ��ͬѧ���ܳɼ���
	*/
	double score[5][2] = {};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "�������" << i << "��ѧ���ɼ���";
			cin >> score[i][j];
		}
	}

	//�����ܳɼ�
	for (int i = 0; i < 5; i++)
	{
		double sum = 0;
		cout << endl;
		for (int j = 0; j < 2; j++)
		{
			sum += score[i][j];
		}
		cout <<"�ܳɼ�Ϊ��" << sum;
	}

	cout << endl;
	//��ӡ��ά����
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		for (int j = 0; j < 2; j++)
		{
			cout << "��" << i << "��ѧ���ĳɼ�Ϊ��" << score[i][j] << " \t";
		}
	}

	return 0;
}