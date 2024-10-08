#include <iostream>
using namespace std;

int main()
{
	int a[3][5] = {
		{1, 2, 3, 4, 5},
		{11, 12, 13, 14, 15},
		{21, 22, 23, 24, 25},
	};
	// 二维数组使用 数组名[下标]时，取该行第一个元素的地址。
	cout << "a[0]:" << a[0] << "  a[1]:" << a[1] << "  a[2]:" << a[2] << endl;
	//结果：a[0]:000000ADE5AFFB78  a[1]:000000ADE5AFFB8C  a[2]:000000ADE5AFFBA0
	cout << "&a[0][0]:" << &a[0][0] << "  &a[1][0]:" << &a[1][0] << "  &a[2][0]:" << &a[2][0] << endl;
	//结果：&a[0][0]:000000ADE5AFFB78  &a[1][0]:000000ADE5AFFB8C  &a[2][0]:000000ADE5AFFBA0

	// 二维数组名只带[]时， 实际是一个指针数组。
	// 下方代码将二维数组的每一行的地址赋值给指针数组 p 的元素。
	// 这里 a[0]、a[1] 和 a[2] 实际上是指向每一行的指针
	int* p[3] = { a[0], a[1], a[2] };
	// 使用指针数组直接访问二维数组,通过 指针数组[行下标][列下标]方式访问二维数组。推荐
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	/*
	输出：1		2	3	4	5
		  11	12	13	14	15
		  21	22	23	24	25
	*/

	// 通过 指针数组[行下标]方式访问二维数组，解引用方式访问二维数组。
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << *(p[i] + j) << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// 通过 指针数组 算术运算符，解引用方式访问二维数组。
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << *(*(p + i) + j)  << "\t";
		}
		cout << endl;
	}
	/*
	输出：1		2	3	4	5
		  11	12	13	14	15
		  21	22	23	24	25
	*/
	cout << endl;

	// 使用指针数组访问二维数组时，第一个不一定是行下标，第二个不一定是列下标
	int* p1[3] = { a[1], &a[0][1], a[2] };  //可以改变顺序或者起始位置
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << p1[i][j] << "\t";
		}
		cout << endl;
	}
	/*
		11	12	13	14
		2	3	4	5
		21	22	23	24
	*/
	cout << endl;
	cout <<  "p[1][1]:" << p1[1][1] << " p[1][1]:" << p[1][1] << endl;  // p[1][1]:3 p1[1][1]:12

	return 0;
}