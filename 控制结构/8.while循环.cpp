#include <iostream>

using namespace std;

int main()
{
	//����1-100 ֮����ۼ�
	int sum = 0;

	int i = 1;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	cout << "sum:" << sum << endl;

	//ʹ�� while ����n�Ľ׳�	
	int n,z=1;
	cout << "��Ҫ�󼸵Ľ׳ˣ�";
	cin >> n;

	i = 1;
	while (i <= n)
	{
		z *= i;
		i++;
	}
	cout << "���Ϊ��" << z << endl;


	return 0;
}