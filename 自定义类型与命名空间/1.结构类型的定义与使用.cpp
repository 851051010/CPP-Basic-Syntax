#include <iostream>

using namespace std;

struct Student
{
	int no;   // ѧ��
	char gender; // �Ա�
	int age;  // ����
	float score; // �ɼ� 
} stu3, stu4;   // ����ṹͬʱ����ṹ����

void info(Student& stu);

int main()
{
	// ����Student���͵ı��� stu1
	Student stu1,stu2;
	cout << sizeof(stu1) << endl;
	// ָ����Ա��ʼ��
	stu1.no = 10000;
	stu1.score = 99;
	stu1.gender = 'f';
	stu1.age = 16;

	stu2 = { 10001,'m',18,80 };
	
	info(stu1);
	info(stu2);
	
	// �ṹ�������ṹ������ֵ�Ƕ�Ӧ��Ա֮����и�ֵ
	stu3 = stu2;
	info(stu2);

	stu3.no = 10002;
	info(stu3);
	info(stu2);

	stu3 = { 10021,'f',28,80 };
	info(stu3);

	return 0;
}

void info(Student& stu)
{
	cout << "ѧ�ţ�" << stu.no << "  �Ա�" << stu.gender << "  ���䣺" << stu.age << "  �ɼ���" << stu.score << endl;
}
