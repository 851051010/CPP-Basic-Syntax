#include <iostream>

using namespace std;

// ����ö������ ,����weekday��˵�����֣� {} ����Ĳ���ö������
//enum weekday{Sun, Mon, Tue, Wed, Thu, Fri, Sat};  // 0 1 2 3 4 5 6


//	ö�������еĸ�Ԫ�ز����ظ�:
//	enum weekday{Sun, Mon, Tue, Wed, Thu, Fri, Sat, Sat}; // ������Sat�ظ��ˡ�

/*
	�����ָ��ö��Ԫ�ص���ʼֵ�����Զ��� 0 ��ʼΪ����Ԫ�����ó�ʼֵ�������ö��Ԫ���������� 1��
	���ָ��ĳ��ö��Ԫ�ص�ֵ������һ��ö��Ԫ�����û��ָ��ֵ��������һ��ö��Ԫ�ص�ֵ +1��
	һ��ö�������õĶ���Ĭ��ֵ��
*/
enum weekday{Sun, Mon, Tue = 9, Wed, Thu = 20, Fri, Sat};

int main()
{
	cout << "Sun:" << Sun << endl;  //Sun:0
	cout << "Mon:" << Mon << endl;  //Mon:1
	cout << "Tue:" << Tue << endl;  //Tue:9
	cout << "Wed:" << Wed << endl;  //Wed:10
	cout << "Thu:" << Thu << endl;  //Thu:20
	cout << "Fri:" << Fri << endl;  //Fri:21
	cout << "Sat:" << Sat << endl;  //Sat:22


	int day;
	cin >> day;
	// ��ö������д��case������
	switch (day)
	{
	case Sun:
		cout << "������" << endl;
		break;
	case Mon:
		cout << "����һ" << endl;
		break;
	case Tue:
		cout << "���ڶ�" << endl;
		break;
	}

	return 0;
}