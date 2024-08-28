#include <iostream>

using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = &a[0], * p1 = &a[4];
	cout << "&a[0]:" << &a[0] << " p:" << p << endl;        //000000A5EA92F578 
	// 对指针进行加法实际上是将指针移动到下一个元素的位置
	cout << "&a[1]:" << &a[1] << " p+1:" << p + 1 << endl;  //000000A5EA92F57C 
	cout << "*(p + 4):" << *(p + 4) << endl;   // 5 
	cout << "*(p1 - 4):" << *(p1 - 4) << endl; // 1

	// 判断p1和p之间间隔多少个元素
	cout << p1 - p << endl;  // 4

	return 0;
}