#include <iostream>

using namespace std;

int main()
{
	const int mme = 5;
	//���峤��Ϊ5����������
	int a[mme], sum = 0;  //����ĳ��ȱ����ǳ���������ֵ��������ų���

	cout << "sizeof(a):" << sizeof(a) << endl;
	//������±��0��ʼ
	a[0] = 60;
	a[1] = 75;
	a[2] = 80;
	a[3] = 90;
	a[4] = 100;

	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += a[i];
	}
	cout << "sum:" << sum << endl;

	//���������±��������Ԫ�ز����
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " " << endl;
	}

	return 0;
}