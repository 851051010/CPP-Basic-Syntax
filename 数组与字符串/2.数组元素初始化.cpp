#include <iostream>
using namespace std;

int main()
{
	//���峤��Ϊ5�����飬ͬʱ���г�ʼ����
	int a1[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		cout << a1[i] << " ";
	}
	cout << endl;

	//��������ʱ��������,���ݳ�ʼ��Ԫ�ظ�����ָ������
	int a2[] = { 1, 2, 3, 4, 5 };
	cout << "sizeof(a2)��" << sizeof(a2) << endl;

	//���峤��Ϊ5�����飬��ʼ������Ԫ�أ�ûд��Ԫ�ػ��� 0 ��
	int a3[5] = { 1, 2, 3};
	for (int i = 0; i < 5; i++)
	{
		cout << a3[i] << " ";
	}
	cout << endl;

	//���峤��Ϊ5�����飬ȫ����ʼ��Ԫ��Ϊ 0 ��
	int a4[5] = {  };
	for (int i = 0; i < 5; i++)
	{
		cout << a4[i] << " ";
	}
	cout << endl;

	return 0;
}