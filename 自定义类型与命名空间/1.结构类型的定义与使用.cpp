#include <iostream>

using namespace std;

struct Student
{
	int no;   // ѧ��
	char gender; // �Ա�
	int age;  // ����
	float score; // �ɼ� 
};
void info(Student stu);

int main()
{
	// ����Student���͵ı��� stu1
	Student stu1;
	cout << sizeof(stu1) << endl;
	// ָ����Ա��ʼ��
	stu1.no = 10000;
	stu1.score = 99;
	stu1.gender = 'f';
	stu1.age = 16;
	
	info(stu1);

	return 0;
}

void info(Student stu)
{
	cout << "ѧ�ţ�" << stu.no << "  �Ա�" << stu.gender << "  ���䣺" << stu.age << "  �ɼ���" << stu.score << endl;
}
