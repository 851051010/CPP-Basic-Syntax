#include <iostream>

using namespace std;

// 数组名作为参数时，传递的是数组的地址
void func(int a[], int len);

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };

	func(a, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";  // 11 12 13 14 15
	}
	cout << endl;

	return 0;
}

// 数组的长度一般是传不过来的，所以要把数组的长度带上
void func(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		a[i] += 10;
	}
}