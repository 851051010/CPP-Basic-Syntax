#include <iostream>
using namespace std;

int main()
{
	int* p;
	// ��̬����һ�����ڴ���������Ĵ洢�ռ䡣ʹָ��pָ��ô洢�ռ�
	p = new int ;
	cout << "*p:" << *p << endl;
	*p = 100;
	cout << "*p:" << *p << endl;
	// �ͷŶ�̬����洢�ռ�
	delete p;

	// ��̬����һ�����ڴ���������Ĵ洢�ռ䲢��ֵ��ʼ��Ϊ200
	p = new int(200);    // �������p = new int; ����һ���ռ�
	cout << "*p:" << *p << endl;
	cout << "*p:" << p << endl;
	delete p;

	// ��̬���䳤��Ϊ5�������ڴ�ռ�
	int size = 5;
	p = new int[size];  // ����ʹ�ñ�����Ϊ�����ռ�Ĵ�С

	for (int i = 0; i < size; i++)
	{
		p[i] = i;
	}

	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
	//�ͷ������ڴ�ռ䡣ע�⣺ָ�����ǰ����[] 
	delete []p;

	// ��̬���䳤��Ϊ5�������ڴ�ռ䲢��ʼ��
	p = new int[size] {2, 4, 6, 8, 10};
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
	delete[]p;

	return 0;
}