#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	// ����int��ָ��
	int* p;


	//�� i �ĵ�ַ��ֵ��p��& ��ȡ��ַ
	p = &i;
	cout << p << endl;  //000000337E8FF8C4
	cout << &i << endl; //000000337E8FF8C4
	
	cout << i << endl;    // 10
	// ��pָ��ı�����ֵΪ 100��*�ǽ�����
	*p = 100;   
	cout << i << endl;   // 100

	// ����ϴ���� 
	int a = 10, b = 20;            // ������������ a �� b
	int* p1 = &a, * p2 = &b, * p3 = NULL; // ����ָ�� a �� b ��ָ�� p1 �� p2

	if (*p1 < *p2)                 // ��� a ��ֵС�� b ��ֵ
	{
		p3 = p1;                   // �� p1 �ĵ�ַ������ p3 ��
		p1 = p2;                   // �� p1 ָ�� b
		p2 = p3;                   // �� p2 ָ��ԭ���� a
	}
	cout << "*p1:" << *p1 << endl; // ��� p1 ָ���ֵ 20


	// NULL �ǿ�ָ��,��ֵΪ 0��˵�����ָ�벻ָ���κ�λ��
	int* p4 = NULL;

	return 0;
}