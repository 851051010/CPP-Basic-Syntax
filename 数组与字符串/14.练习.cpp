#include <iostream>

using namespace std;
int main()
{
	/*
		翻转字符串 
		例如：“abcABC123” 翻转后“321CBAcba”
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
		判断是否是回文
	*/
	char c2[] = "abc123421cba";
	len = strlen(c2);
	n = len / 2;
	for (int i = 0; i < n; i++)
	{
		if (c2[i] != c2[len - 1 - i])
		{
			cout << "不是回文" << endl;
			return 0;
		}
	}
	cout << "是回文" << endl;

	return 0;
}