#include <iostream>
using namespace std;
int main()
{
	int m = 10,n = 20;
	//  定义引用a并初始化为m的别名
	int& a = m;  // 引用在定义时必须初始化
	// 通过a可以获取m的值
	cout << "a:" << a << endl;  //a:10

	// m的值改变了，a的值也会跟着改变
	m = 100;
	cout << "a:" << a << endl;  //a:100
	// a的值改变了，m的值也会跟着改变
	a = n;
	cout << "a:" << a << "  m:" << m << endl;  //a:20  m:20
	// 对变量的引用取地址和变量本身取地址，结果相同
	cout << "&a:" << &a << "  &m:" << &m << endl;  
	//&a:0000003E0B14F874  &m:0000003E0B14F874

	return 0;
}