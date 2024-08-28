#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	// 定义指针变量
	int* p1 = &a;
	// 定义二级指针变量
	int** p2 = &p1;
	// 通过二级指针 p2 给 a 赋值
	**p2 = 100;
	cout << a << endl;  // 100

	long long* p3 = NULL;
	long long** p4 = NULL;

	/*
		所有的指针大小都是一样的
		指针变量的大小只和编译选项有关
		x64选项为8字节；x86选项为4字节
	*/ 
	long long* p3 = NULL;
	long long** p4 = NULL;
	cout<< "sizeof(p1):" << sizeof(p1) << endl;   //8
	cout << "sizeof(p2):" << sizeof(p2) << endl;  //8
	cout << "sizeof(p3):" << sizeof(p3) << endl;  //8
	cout << "sizeof(p4):" << sizeof(p4) << endl;  //8


	return 0;
}