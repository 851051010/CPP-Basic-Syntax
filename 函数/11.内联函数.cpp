#include <iostream>

using namespace std;
/*
	声明内联函数myAdd 
	inline关键字用于声明内联函数，一般在函数声明时添加即可
*/
inline int myAdd(int m, int n);

int main()
{
	int n = myAdd(1, 2);
	cout << "n:" << n << endl;
	n = myAdd(3, 4);
	cout << "n:" << n << endl;

	return 0;
}

// 函数声明为 inline 后，定义时没有inline关键字也是内联函数
int myAdd(int m, int n)
{
	return m + n;
}