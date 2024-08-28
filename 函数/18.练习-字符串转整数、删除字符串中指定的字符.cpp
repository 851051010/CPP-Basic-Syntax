#include <iostream>

using namespace std;
// 字符串转整数。参数是要转换的字符串，返回值时转换出来的整数
int myConvert(char* p);

// 删除字符串中指定的字符,第一个参数是字符串，第二个参数是指定的字符。
void delChar(char* p, char c);

int main()
{
	char c[] = "1234567";
	cout << myConvert(c) + 1 << endl;

	char c1[] = "Abc123";
	delChar(c1, '1'); // 删除c1中的1
	cout << c1 << endl;

	return 0;
}

void delChar(char* p, char c)
{
	int len = strlen(p);
	for (int i = 0; i < len; i++) 
	{
		if (p[i] == c)
		{
			for (int j = i; j < len ; j++)
			{
				p[j] = p[ j + 1];
			}
			break;
		}
	}
}

int myConvert(char* p)
{
	int n = 0;
	for (int i = 0; i < strlen(p); i++)
	{
		n *= 10;
		n += p[i] - '0';
	}
	return n;

}