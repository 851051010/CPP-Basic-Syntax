#include <iostream>

using namespace std;

void mySwap(int x, int y);  // 数值作为参数

int main()
{
	int a = 10, b = 20;
	mySwap(a, b);
	cout << "main a=" << a << "  b=" << b << endl;  //main m=10  n=20
	cout << "main &a=" << &a << "  &b=" << &b << endl; 
	//main &m=000000023B8FF894  &n=000000023B8FF8B4   ,在栈里面，它们不在同一个内存区域，所以值不会影响彼此
	return 0;
}

void mySwap(int x,int y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << "mySwap x=" << x << "  y=" << y << endl;  // mySwap m=20  n=10
	cout << "mySwap &x=" << &x << "  &y=" << &y << endl; 
	//mySwap &m=000000023B8FF870  &n=000000023B8FF878
}