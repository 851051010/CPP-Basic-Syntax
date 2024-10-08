#include <iostream>

using namespace std;

/*
 	C++中函数不能直接返回一个数组，但是可以通过返回指针来实现返回一个数组。
	C++不支持 int[] 作为函数类型，但是可以使用 int * 作为函数类型。
	C++的函数中一般不会直接返回数组，需要数组存放结果时，一般作为参数传入函数。（常用）
	函数中创建的数组，会随着函数执行完毕而销毁，所以不能返回。
	函数中动态分配的连续空间，不会随着函数执行完毕而销毁，可以返回，但是切记要在主调函数中释放空间。
*/
int* func1()
{
	// int a[5] = {}; 数组，func1运行结束时会被销毁，不要返回。
	int* a = new int[5] {};  //动态分配的连续空间
	return a;
}

int main()
{
	int* a = func1();
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "  ";
	}
	delete[]a;
	return 0;
}