#include <iostream>

using namespace std;

// 定义重载函数
int myMax(int m, int n);
float myMax(float m, float n);   // 函数的参数类型或者个数不一样的才算重载函数
int myMax(int m, int n, int k);

int main()
{
	// 使用重载函数。编译器根据参数类型或个数调用对应的重载数。
	cout << "Max(1, 2):" << myMax(1, 2) << endl;      // 2
	cout << "Max(1.1, 2.1):" << myMax(1.1f, 2.1f) << endl;  // 2.1
	cout << "Max(15, 2127, 998):" << myMax(15, 2127, 998) << endl; // 2127
	return 0;
}

int myMax(int m, int n)
{
	cout << "int myMax(int m, int n)" << endl;
	if (m > n)
	{
		return m;
	}
	return n;
}

float myMax(float m, float n)
{
	cout << "float myMax(float m, float n)" << endl;
	if (m > n)
	{
		return m;
	}
	cout << "tttttttttttttttttt";
	return n;
}

int myMax(int m, int n, int k)
{
	cout << "int myMax(int m, int n, int k)" << endl;
	int max = m;
	if (max < n)
	{
		max = n;
	}
	if (max < k)
	{
		max = k;
	}
	return max;
}
