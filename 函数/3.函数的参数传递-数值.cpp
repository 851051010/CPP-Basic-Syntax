#include <iostream>

using namespace std;

void mySwap(int x, int y);  // ��ֵ��Ϊ����

int main()
{
	int a = 10, b = 20;
	mySwap(a, b);
	cout << "main a=" << a << "  b=" << b << endl;  //main m=10  n=20
	cout << "main &a=" << &a << "  &b=" << &b << endl; 
	//main &m=000000023B8FF894  &n=000000023B8FF8B4   ,��ջ���棬���ǲ���ͬһ���ڴ���������ֵ����Ӱ��˴�
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