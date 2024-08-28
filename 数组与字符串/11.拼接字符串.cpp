#include <iostream>

using namespace std;

int main()
{
	char c1[20] = "C++ ";
	char c2[20] = "program";

	/*
		strcat_s(目标字符串，缓冲区大小，源字符串)
		缓冲区大小要大于目标字符串长 + 源字符串长度;
		小于等于目标字符数组的长度。
	*/
	// 常用方式
	strcat_s(c1, strlen(c1) + strlen(c2) + 1, c2);
	cout << c1 << endl;  // C++ program

	// 缓冲区大小必须小于等于目标字符数组的长度。
	strcat_s(c1, 20, c2);
	cout << c1 << endl;

	// 缓冲区大小必须大于目标字符串常 + 源字符串长度
	c1[4] = '\0';   // c1中的字符串重新变成C++
	cout << "c1:" << c1 << endl;
	strcat_s(c1, 12, c2);
	cout << c1 << endl;

	return 0;
}