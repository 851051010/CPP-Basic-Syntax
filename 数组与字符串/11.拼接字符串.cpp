#include <iostream>

using namespace std;

int main()
{
	char c1[20] = "C++ ";
	char c2[20] = "program";

	/*
		strcat_s(Ŀ���ַ�������������С��Դ�ַ���)
		��������СҪ����Ŀ���ַ����� + Դ�ַ�������;
		С�ڵ���Ŀ���ַ�����ĳ��ȡ�
	*/
	// ���÷�ʽ
	strcat_s(c1, strlen(c1) + strlen(c2) + 1, c2);
	cout << c1 << endl;  // C++ program

	// ��������С����С�ڵ���Ŀ���ַ�����ĳ��ȡ�
	strcat_s(c1, 20, c2);
	cout << c1 << endl;

	// ��������С�������Ŀ���ַ����� + Դ�ַ�������
	c1[4] = '\0';   // c1�е��ַ������±��C++
	cout << "c1:" << c1 << endl;
	strcat_s(c1, 12, c2);
	cout << c1 << endl;

	return 0;
}