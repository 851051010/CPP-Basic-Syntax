#include <iostream>

using namespace std;

int main()
{
	char c1[] = "C++ Program 123*&^";
	char c2[] = "C++ Program 123*&^";
	// 字符串转大写
	_strupr_s(c1);
	cout << c1 << endl;   //C++ PROGRAM 123*&^
	// 字符串转小写
	_strlwr_s(c2);
	cout << c2 << endl;  //c++ program 123*&^

	// 单个小写字母转大写
	cout << (char)('t' + ('A' - 'a')) << endl;  // T
	// 单个大写字母转小写
	cout << (char)('A' + ('b' - 'B')) << endl;  // a

	return 0;
}