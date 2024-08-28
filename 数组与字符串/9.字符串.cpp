#include <iostream> // iostream库中包含string类型
//#include <string>  使用string类型的字符串，需要导入string库

using namespace std;

int main()
{
	// 定义string 类型的字符串
	string s = "Hello World!";
	cout << s << endl;

	// 定义字符数组的字符串
	 char c1[] = "Hello World!";
	cout << c1 << endl;    // Hello World!
	 c1[5] = '\0';
	cout << c1 << endl;  // Hello

	// 计算字符串的长度
	int len = 0;
	while (c1[len] != '\0')
	{
		len++;
	}
	cout << "len:" << len << endl;  

	char c1[] = "Hello World!";
	cout << "strlen(c1)：" << strlen(c1) << endl;  // 12

	return 0;
}