#include <iostream>

using namespace std;


int myMax(int num1, int num2);
int myPower(int n);

int main()
{
	int a, b;
	cout << "�������������֣�";
	cin >> a >> b;
	cout << "�����Ϊ��"<< myMax(a, b) << endl;

	int n;
	cout << "������Ҫ��Ľ׳ˣ�";
	cin >> n;
	cout << "�׳�Ϊ��" << myPower(n) << endl;

	return 0;
}

// ��д�������������еĽϴ�ֵ
int myMax(int num1, int num2) {
	if (num1 < num2)
	{
		return num2;
	}
	return num1;
}

// ����n�Ľ׳�
int myPower(int n)
{
	int sum=1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}	
	return sum;
}