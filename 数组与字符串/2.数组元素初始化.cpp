#include <iostream>
using namespace std;

int main()
{
	//定义长度为5的数组，同时进行初始化。
	int a1[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		cout << a1[i] << " ";
	}
	cout << endl;

	//定义数组时不给长度,根据初始化元素个数来指定长度
	int a2[] = { 1, 2, 3, 4, 5 };
	cout << "sizeof(a2)：" << sizeof(a2) << endl;

	//定义长度为5的数组，初始化部分元素，没写的元素会是 0 。
	int a3[5] = { 1, 2, 3};
	for (int i = 0; i < 5; i++)
	{
		cout << a3[i] << " ";
	}
	cout << endl;

	//定义长度为5的数组，全部初始化元素为 0 。
	int a4[5] = {  };
	for (int i = 0; i < 5; i++)
	{
		cout << a4[i] << " ";
	}
	cout << endl;

	return 0;
}