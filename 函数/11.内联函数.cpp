#include <iostream>

using namespace std;
/*
	������������myAdd 
	inline�ؼ���������������������һ���ں�������ʱ��Ӽ���
*/
inline int myAdd(int m, int n);

int main()
{
	int n = myAdd(1, 2);
	cout << "n:" << n << endl;
	n = myAdd(3, 4);
	cout << "n:" << n << endl;

	return 0;
}

// ��������Ϊ inline �󣬶���ʱû��inline�ؼ���Ҳ����������
int myAdd(int m, int n)
{
	return m + n;
}