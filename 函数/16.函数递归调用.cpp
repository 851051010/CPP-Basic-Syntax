#include <iostream>

using namespace std;

// �ݹ���׳�
long long myPower(int n);

int main()
{
	cout << myPower(3) << endl;
	cout << myPower(4) << endl;
	cout << myPower(0) << endl;
	cout << myPower(1) << endl;
	return 0;
}

long long myPower(int n)
{
	long long r = 1;
	if (n > 0)
	{
		r = n * myPower(n - 1);
	}
	else
	{
		r = 1;
	}
	return r;
}
