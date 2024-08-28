#include <iostream>

using namespace std;

int main()
{
	//定义长度为10的字符串并初始化,默认值为空字符 '\0'
	char c[10] = {'t','a','o','s','w','e','e','t','.'};  //最后一个元素为空字符 '\0'

	//字符数组的整体引用
	cout << c << endl;   //taosweet
	//字符数组的单个数组元素引用
	cout << c[1] << endl;  // a

	// 最后一个元素被赋值为! ，整体引用时cout找不到结束标识 \0 会输出乱码。
	// C++语言中规定，空字符 ‘\0’ 是字符串结束标志。
	c[8] = '!';
	cout << c[8] << endl;
	// 单个数组元素引用时，没有0也不会输出乱码。
	for (int i = 0; i < 10; i++)
	{
		cout << c[i];
	}
	cout << endl;

	// 使用字符串初始化字符数组
	char c1[5] = "abcd";
	// 第五个元素是空字符 '\0'，空字符的ASCII码是0。
	cout << (int)c1[4] << endl;

	//省略长度，按照赋值的字符串计算长度。
	char c2[] = "mme";
	cout << "sizeof(c2)大小：" << sizeof(c2) << endl;  //4

	return 0;
}