#include <iostream>

using namespace std;

int main()
{
	//char c1[20] = "C++";
	//char c2[10] = "C++";

	/*
		strcmp(字符串1，字符串2)
		字符串1与字符串2相等，返回0;
		字符串1大于字符串2，返回1;
		字符串1小于字符串2，返回-1;
	*/

	char c1[20] = "C++";
	char c2[10] = "C++";
	int r = strcmp(c1, c2);
	cout << "r:" << r << endl;  // c1 和 c2中的字符串相等，返回0

	cout << "c1:" << c1 << endl;
	cout << "c2:" << c2 << endl;

	c1[3] = 'a';
	c2[3] = 'b';
	r = strcmp(c2, c1);    // c2中的字符串大于c1中的字符串，返回1
	cout << "r:" << r << endl;

	r = strcmp(c1, c2);   // c1中的字符串小于c2中的字符串，返回-1
	cout << "r:" << r << endl;

	return 0;
}