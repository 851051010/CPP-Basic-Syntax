#include <iostream>

using namespace std;

int myAdd(int x, int y);
int mySub(int x, int y);

int main()
{	
	// ���������Ǻ��������ֽڵĵ�ַ
	cout << myAdd << endl;  // 00007FF684CB1113
	
	// ���庯��ָ�룬����ָ��������� int �Ͳ����������� int �Ͳ����ĺ���
	int (*fp)(int, int);

	// ����ָ��fpָ��myAdd����
	fp = myAdd;
	
	// ʹ�ú���ָ����ú���
	cout << fp(1, 1) << endl; // 2

	fp = mySub;
	cout << fp(1, 1) << endl; // 0

	return 0;
}

int myAdd(int x, int y)
{
	return x + y;
}

int mySub(int x, int y)
{
	return x - y;
}