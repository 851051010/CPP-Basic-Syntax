#include <iostream> // iostream���а���string����
//#include <string>  ʹ��string���͵��ַ�������Ҫ����string��

using namespace std;

int main()
{
	// ����string ���͵��ַ���
	string s = "Hello World!";
	cout << s << endl;

	// �����ַ�������ַ���
	 char c1[] = "Hello World!";
	cout << c1 << endl;    // Hello World!
	 c1[5] = '\0';
	cout << c1 << endl;  // Hello

	// �����ַ����ĳ���
	int len = 0;
	while (c1[len] != '\0')
	{
		len++;
	}
	cout << "len:" << len << endl;  

	char c1[] = "Hello World!";
	cout << "strlen(c1)��" << strlen(c1) << endl;  // 12

	return 0;
}