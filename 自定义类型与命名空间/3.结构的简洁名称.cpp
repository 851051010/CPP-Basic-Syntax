#include <iostream>

using namespace std;

// ����ṹ����student��ͬʱʹ��typedef�������
typedef struct Student
{
	int no;   // ѧ��
	char gender; // �Ա�
	int age;  // ����
	float score; // �ɼ� 
} stu3, stu4; //  ����ṹͬʱ����������stu3��stu3��

// ����ṹ����student��ʹ��typedef����������:
typedef Student stu1;

// �����ṹ����ʱ��ʹ��typedef����������:
typedef struct dog D;

struct dog
{
	int age;
};

void info(Student& stu);

int main()
{
	stu3 s1 = {10000,'m',16.85};
	info(s1);
	stu4 s2 = { 111000,'f',20.90 };
	info(s2);
	stu1 s3 = { 222000,'m',25.50 };
	info(s3);

	return 0;
}

void info(Student& stu)
{
	cout << "ѧ�ţ�" << stu.no << " �Ա�" << stu.gender << " ���䣺" << stu.age << " �ɼ���" << stu.score << endl;
}
