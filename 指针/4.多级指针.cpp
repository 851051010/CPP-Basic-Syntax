#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	// ����ָ�����
	int* p1 = &a;
	// �������ָ�����
	int** p2 = &p1;
	// ͨ������ָ�� p2 �� a ��ֵ
	**p2 = 100;
	cout << a << endl;  // 100

	long long* p3 = NULL;
	long long** p4 = NULL;

	/*
		���е�ָ���С����һ����
		ָ������Ĵ�Сֻ�ͱ���ѡ���й�
		x64ѡ��Ϊ8�ֽڣ�x86ѡ��Ϊ4�ֽ�
	*/ 
	long long* p3 = NULL;
	long long** p4 = NULL;
	cout<< "sizeof(p1):" << sizeof(p1) << endl;   //8
	cout << "sizeof(p2):" << sizeof(p2) << endl;  //8
	cout << "sizeof(p3):" << sizeof(p3) << endl;  //8
	cout << "sizeof(p4):" << sizeof(p4) << endl;  //8


	return 0;
}