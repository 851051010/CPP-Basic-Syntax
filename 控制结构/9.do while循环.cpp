#include <iostream>

using namespace std;

int main()
{
	// ����1-100 ֮����ۼӡ�
	int sum = 0, i = 10000;
	//do while ѭ����ִ��ѭ�����ж�ѭ������
	do
	{
		sum += i++;
	} while (i <= 100);
	
	cout << "sum��" << sum << endl;
	return 0;
}