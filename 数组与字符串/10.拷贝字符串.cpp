#include <iostream>
//#include <iomanip>  字符数组字符串处理函数包含在 iomanip 库中。

using namespace std;

int main()
{
	char c1[4] = "C++";
	char c2[] = "abcde";

	/*
	 	把源字符串拷贝到目标字符串
		strcpy_s(目标字符串，缓冲区大小(源字符串的大小，包括结尾的空字符），源字符串);
		缓冲区的大小要小于等于目标字符数组的长度，大于源字符串的长度。
	*/

	// 常用方式

	strcpy_s(c2, strlen(c1) + 1, c1);
	cout << "c2:" << c2 << endl;   //C++

	// 缓冲区的大小，大于源字符串的长度（源字符串C++的长度是3）
	strcpy_s(c2, 4, c1);
	cout << "c2:" << c2 << endl;
	cout << "c2[4]:" << c2[4] << endl;   // 输出 e
	cout << "c2[3]:" << c2[3] << endl;   // 输出  空白
	cout << "c2[2]:" << c2[2] << endl;   // 输出  +
	// 即不会抹除原来的后面的字符，但是因为前面有 \0 所以也不会输出

	// 缓冲区的大小等于目标字符数组的长度，目标字符串数组c2的长度是6
	strcpy_s(c2, 6, c1);
	cout << "c2:" << c2 << endl;
	cout << "c2[4]:" << c2[4] << endl;   // 会被抹除，变成 \0

	return 0;
}