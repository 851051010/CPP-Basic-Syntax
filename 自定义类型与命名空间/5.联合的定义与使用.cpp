#include <iostream>

using namespace std;

// ������������,��ò�Ҫ�ã����׳���
union MyData
{
	int i;
	char c;
	float f;
};

int main()
{
	// ��������ռ�õĿռ��ɳ�Ա��ռ�ÿռ��������;���
	cout << "sizeof(MyData): " << sizeof(MyData) << endl;  
	// sizeof(MyData): 4

	// �������ϱ���
	MyData md;

	// ���ϱ��������Աʹ��ͬһ�ڴ�ռ�
	md.i = 98;
	cout << "md.c: " << md.c << "  md.i: " << md.i<<  endl;
	// md.c: b  md.i: 98
	md.c = 'a';
	cout << "md.c: " << md.c << "  md.i: " << md.i<< "  md.f: " << md.f << endl;
	// md.a: b  md.i: 32610  md.f: 4.56963e-41  ,����ͻ������
	md.f = 99;
	cout << "md.c: " << md.c << "  md.i: " << md.i << "  md.f: " << md.f << endl;
	// md.c:   md.i: 1120272384  md.f: 99

	return 0;
}