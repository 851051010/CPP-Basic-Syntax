#include <iostream>

using namespace std;

int main() 
{
	int n,g,s,b,t;

	cout << "������һ��3λ����";
	cin >> n;

	//��ȡ��λ
	b = n / 100;

	//��ȡʮλ
	t = n % 100;
	s = t / 10;

	//��ȡ��λ
	g = t % 10;

	cout << g << s << b;

	return 0;
}