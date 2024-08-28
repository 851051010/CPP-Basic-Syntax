#include <iostream>
using namespace std;
int main()
{
	/*
		malloc申请动态内存时，大小由参数决定。
		分配成功时返回地址，失败时返回NULL。
	*/

	// malloc 分配单个存储空间
	int* p = (int *)malloc(sizeof(int));
	float* p = (float *)malloc(sizeof(float));  //什么类型就用什么类型的大小
	*p = 100;
	cout << "*p:" << *p << endl;  // *p:100
	// 释放单个存储空间
	free(p);

	//申请连续内存空间
	p = (int*)malloc(sizeof(int) * 5);
	p[1] = 123;
	cout << "*(p + 1):" << *(p + 1) << endl;  //*(p + 1):123
	// 释放单个存储空间
	free(p);
	
	return 0;
}