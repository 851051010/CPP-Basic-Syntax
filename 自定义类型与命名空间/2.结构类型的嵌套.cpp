#include <iostream>

using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

struct Student
{
	int no;   // ѧ��
	char gender; // �Ա�
	int age;  // ����
	float score; // �ɼ� 
	Date birthday; // ����
	/*
		Student stu���������ṹ�в���Ƕ���Լ���
		Student *stu�������ṹ��������ָ���Լ���ָ�롣
	*/
};

void info(Student& stu);

int main()
{
	Student stu1, stu2;
	// ָ����Ա��ʼ��
	stu1.no = 10000;
	stu1.score = 99;
	stu1.gender = 'f';
	stu1.age = 16;
	stu1.birthday.day = 1;
	stu1.birthday.month = 6;
	stu1.birthday.year = 2021;

	// ˳���ʼ��
	stu2 = { 10001,'m',16,80,{2024,8,21} };

	info(stu1);
	info(stu2);
	return 0;
}

void info(Student& stu)
{
	cout << "ѧ�ţ�" << stu.no << "  �Ա�" << stu.gender << "  ���䣺" << stu.age << "  �ɼ���" << stu.score ;
	cout << "  �������ڣ�" << stu.birthday.year << "-" << stu.birthday.month << "-" << stu.birthday.day << endl;
}
