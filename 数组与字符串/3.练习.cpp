#include <iostream>
using namespace std;

int main()
{
	// ����ѧ���ĳɼ�������5��ѧ���ĳɼ���ʹ������洢��������ƽ���ɼ�

	double score[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "������ѧ���ɼ���";
		cin >> score[i];
	}

	double sum = 0, avg = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	avg = sum / 5;
	cout << "ƽ���ɼ�Ϊ��" << avg << endl;


	return 0;
}