#include <iostream>

using namespace std;

// �������غ���
int myMax(int m, int n);
float myMax(float m, float n);   // �����Ĳ������ͻ��߸�����һ���Ĳ������غ���
int myMax(int m, int n, int k);

int main()
{
	// ʹ�����غ��������������ݲ������ͻ�������ö�Ӧ����������
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
