#include <iostream>

using namespace std;

int func(int n)
{
	// ���徲̬���� f ��static �ؼ��ֿ��԰ѱ�������Ϊ��̬�洢��ʽ��
	static	int f = 1;
	f *= n;
	return f;
}

int main()
{
	cout << func(2) << endl;  // 2
	cout << func(3) << endl;  // 6
	cout << func(4) << endl;  // 24

	return 0;
}