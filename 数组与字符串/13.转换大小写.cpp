#include <iostream>

using namespace std;

int main()
{
	char c1[] = "C++ Program 123*&^";
	char c2[] = "C++ Program 123*&^";
	// �ַ���ת��д
	_strupr_s(c1);
	cout << c1 << endl;   //C++ PROGRAM 123*&^
	// �ַ���תСд
	_strlwr_s(c2);
	cout << c2 << endl;  //c++ program 123*&^

	// ����Сд��ĸת��д
	cout << (char)('t' + ('A' - 'a')) << endl;  // T
	// ������д��ĸתСд
	cout << (char)('A' + ('b' - 'B')) << endl;  // a

	return 0;
}