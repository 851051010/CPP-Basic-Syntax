#include <iostream>

using namespace std;

void mySwap(int* p1, int* p2);  // 指针作为参数

int main()
{
	int a = 10, b = 20;
	mySwap(&a, &b);
	cout << "main a=" << a << "  b=" << b << endl;  //main a=20  b=10
	//cout << "main &a=" << &a << "  &b=" << &b << endl;
	return 0;
}

void mySwap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}