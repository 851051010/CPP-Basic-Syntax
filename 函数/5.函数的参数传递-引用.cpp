#include <iostream>

using namespace std;

void mySwap(int& m, int& n);  // ������Ϊ����

int main()
{
	// ������Ϊ�������ݵ��Ǳ����ĵ�ַ
	int a = 10, b = 20;
	mySwap(a, b);
	// a��b ��ֵ������
	cout << "main a=" << a << "  b=" << b << endl;  //main a=20  b=10

	// mySwap(1, b);  ������Ϊ����ʱ��ʵ�α����Ǳ���

	return 0;
}

// �β�m��n�ֱ���ʵ��a��b�ı�����m��n��ֵ�����仯��a��b��ֵҲ�ᷢ�ͱ仯
void mySwap(int& m, int& n)
{
	int temp = m;
	m = n;
	n = temp;
}