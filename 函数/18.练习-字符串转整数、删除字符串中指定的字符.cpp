#include <iostream>

using namespace std;
// �ַ���ת������������Ҫת�����ַ���������ֵʱת������������
int myConvert(char* p);

// ɾ���ַ�����ָ�����ַ�,��һ���������ַ������ڶ���������ָ�����ַ���
void delChar(char* p, char c);

int main()
{
	char c[] = "1234567";
	cout << myConvert(c) + 1 << endl;

	char c1[] = "Abc123";
	delChar(c1, '1'); // ɾ��c1�е�1
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