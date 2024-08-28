#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	// 定义int型指针
	int* p;


	//将 i 的地址赋值给p，& 是取地址
	p = &i;
	cout << p << endl;  //000000337E8FF8C4
	cout << &i << endl; //000000337E8FF8C4
	
	cout << i << endl;    // 10
	// 将p指向的变量赋值为 100，*是解引用
	*p = 100;   
	cout << i << endl;   // 100

	// 输出较大的数 
	int a = 10, b = 20;            // 定义两个整数 a 和 b
	int* p1 = &a, * p2 = &b, * p3 = NULL; // 创建指向 a 和 b 的指针 p1 和 p2

	if (*p1 < *p2)                 // 如果 a 的值小于 b 的值
	{
		p3 = p1;                   // 将 p1 的地址保存在 p3 中
		p1 = p2;                   // 将 p1 指向 b
		p2 = p3;                   // 将 p2 指向原来的 a
	}
	cout << "*p1:" << *p1 << endl; // 输出 p1 指向的值 20


	// NULL 是空指针,其值为 0，说明这个指针不指向任何位置
	int* p4 = NULL;

	return 0;
}