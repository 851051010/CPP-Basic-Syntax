#include <iostream>
using namespace std;
int main()
{
	int m = 10,n = 20;
	//  ��������a����ʼ��Ϊm�ı���
	int& a = m;  // �����ڶ���ʱ�����ʼ��
	// ͨ��a���Ի�ȡm��ֵ
	cout << "a:" << a << endl;  //a:10

	// m��ֵ�ı��ˣ�a��ֵҲ����Ÿı�
	m = 100;
	cout << "a:" << a << endl;  //a:100
	// a��ֵ�ı��ˣ�m��ֵҲ����Ÿı�
	a = n;
	cout << "a:" << a << "  m:" << m << endl;  //a:20  m:20
	// �Ա���������ȡ��ַ�ͱ�������ȡ��ַ�������ͬ
	cout << "&a:" << &a << "  &m:" << &m << endl;  
	//&a:0000003E0B14F874  &m:0000003E0B14F874

	return 0;
}