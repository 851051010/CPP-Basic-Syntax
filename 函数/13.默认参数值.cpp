#include <iostream>

using namespace std;

// Ĭ��ֵ�����ں�������ʱ����
/*
	Ĭ���βα�������������θ��������ĳ��������Ĭ��ֵ�������Ҳ�Ĳ������붼Ҫ��Ĭ��ֵ��
	double myPower(double m = 1.0, int n);   ����������
*/
double myPower(double m, int n = 2);   // ����n��Ĭ��ֵΪ2 

int main()
{
	cout << " myPower(2, 0)��" << myPower(2, 0) << endl;
	cout << " myPower(2, 2)��" << myPower(2, 2) << endl;
	cout << " myPower(3)��" << myPower(3) << endl;  // ʹ��Ĭ��ֵ
	return 0;
}

// ��η�
double myPower(double m, int n)
{
	double  r = 1;
	for (int  i = 1; i <= n; i++)
	{
		r*= m;
	}
	return r;
}
