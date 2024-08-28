#include <iostream>
using namespace std;

int main()
{
	int* p;
	// 动态分配一个用于存放整型数的存储空间。使指针p指向该存储空间
	p = new int ;
	cout << "*p:" << *p << endl;
	*p = 100;
	cout << "*p:" << *p << endl;
	// 释放动态分配存储空间
	delete p;

	// 动态分配一个用于存放整型数的存储空间并把值初始化为200
	p = new int(200);    // 和上面的p = new int; 不是一个空间
	cout << "*p:" << *p << endl;
	cout << "*p:" << p << endl;
	delete p;

	// 动态分配长度为5的连续内存空间
	int size = 5;
	p = new int[size];  // 可以使用变量作为连续空间的大小

	for (int i = 0; i < size; i++)
	{
		p[i] = i;
	}

	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
	//释放连续内存空间。注意：指针变量前加上[] 
	delete []p;

	// 动态分配长度为5的连续内存空间并初始化
	p = new int[size] {2, 4, 6, 8, 10};
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
	delete[]p;

	return 0;
}