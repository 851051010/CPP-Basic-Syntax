#include <iostream>

using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = &a[0], * p1 = &a[4];

	cout << "p:" << p << "  p1:" << p1 << endl;   //p:00000056460FF9F8  p1:00000056460FFA08
	// ��ϵ������Ƚ�����ָ������д洢�ĵ�ַ
	cout << "p1 > p :" << (p1 > p) << endl;  //p1 > p :1
	cout << "p > p1 :" << (p > p1) << endl;  //p > p1 :0

	// ���� == �� != ,�ж�����ָ���Ƿ�ָ����ͬ�ı���
	p1 = &a[0];
	cout << "p = p1 :" << (p == p1) << endl;  //p = p1 :1
	cout << "p != p1 :" << (p != p1) << endl; //p != p1 :0

	// Ҳ�������bull�Ƚ��ж�ָ���Ƿ�Ϊ��
	int* p2 = NULL;
	if (p2 == NULL)
	{
		cout << "p2�ǿ�ָ��" << endl;  //p2�ǿ�ָ��
	}

	return 0;
}