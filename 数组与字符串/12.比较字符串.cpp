#include <iostream>

using namespace std;

int main()
{
	//char c1[20] = "C++";
	//char c2[10] = "C++";

	/*
		strcmp(�ַ���1���ַ���2)
		�ַ���1���ַ���2��ȣ�����0;
		�ַ���1�����ַ���2������1;
		�ַ���1С���ַ���2������-1;
	*/

	char c1[20] = "C++";
	char c2[10] = "C++";
	int r = strcmp(c1, c2);
	cout << "r:" << r << endl;  // c1 �� c2�е��ַ�����ȣ�����0

	cout << "c1:" << c1 << endl;
	cout << "c2:" << c2 << endl;

	c1[3] = 'a';
	c2[3] = 'b';
	r = strcmp(c2, c1);    // c2�е��ַ�������c1�е��ַ���������1
	cout << "r:" << r << endl;

	r = strcmp(c1, c2);   // c1�е��ַ���С��c2�е��ַ���������-1
	cout << "r:" << r << endl;

	return 0;
}