#include <iostream>

using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = &a[0], * p1 = &a[4];

	cout << "p:" << p << "  p1:" << p1 << endl;   //p:00000056460FF9F8  p1:00000056460FFA08
	// 关系运算符比较两个指针变量中存储的地址
	cout << "p1 > p :" << (p1 > p) << endl;  //p1 > p :1
	cout << "p > p1 :" << (p > p1) << endl;  //p > p1 :0

	// 常用 == 、 != ,判断两个指针是否指向相同的变量
	p1 = &a[0];
	cout << "p = p1 :" << (p == p1) << endl;  //p = p1 :1
	cout << "p != p1 :" << (p != p1) << endl; //p != p1 :0

	// 也常用与和bull比较判断指针是否为空
	int* p2 = NULL;
	if (p2 == NULL)
	{
		cout << "p2是空指针" << endl;  //p2是空指针
	}

	return 0;
}