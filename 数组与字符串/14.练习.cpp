#include <iostream>

using namespace std;
int main()
{
	/*
		��ת�ַ��� 
		���磺��abcABC123�� ��ת��321CBAcba��
	*/

	char c[] = "abcABC123";
	int len = strlen(c);
	int n = len / 2;

	for (int i = 0; i < n; i++)
	{
		char c1 = c[i];
		c[i] = c[len - 1 - i];
		c[len - 1 - i] = c1;
	}
	cout << c << endl;

	/*
		�ж��Ƿ��ǻ���
	*/
	char c2[] = "abc123421cba";
	len = strlen(c2);
	n = len / 2;
	for (int i = 0; i < n; i++)
	{
		if (c2[i] != c2[len - 1 - i])
		{
			cout << "���ǻ���" << endl;
			return 0;
		}
	}
	cout << "�ǻ���" << endl;

	return 0;
}