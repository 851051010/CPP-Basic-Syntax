#include <iostream>

using namespace std;

// ��������Ϊ����ʱ�����ݵ�������ĵ�ַ
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

// ����ĳ���һ���Ǵ��������ģ�����Ҫ������ĳ��ȴ���
void func(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		a[i] += 10;
	}
}