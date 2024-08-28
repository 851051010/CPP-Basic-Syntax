#include <iostream>

using namespace std;

int main() 
{
	int n,g,s,b,t;

	cout << "请输入一个3位数：";
	cin >> n;

	//获取百位
	b = n / 100;

	//获取十位
	t = n % 100;
	s = t / 10;

	//获取个位
	g = t % 10;

	cout << g << s << b;

	return 0;
}