#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 20, c = 30;
	//���峤��Ϊ3��intָ������
	int* p[3] = { &a, &b, &c };
	cout << "sizeof(p):" << sizeof(p) << endl;  // sizeof(p):24
	//ͨ��intָ�������int�ͱ�����ֵ
	for (int i = 0; i < 3; i++)
	{
		*p[i] += 1;
	}
	cout << "a:" << a << " b:" << b << " c:" << c << endl; 
	// �����a:11 b:21 c:31

	return 0;
}