#include <iostream>

using namespace std;

typedef struct Student
{
	int no;   // ѧ��
	char gender; // �Ա�
	int age;  // ����
	float score; // �ɼ� 
} ;
void info(Student& stu);

int main()
{
	// ����ṹ��������
	Student s[5] = {
		{1,'m',16,90},
		{2,'m',15,94},
		{3,'f',17,60},
		{4,'m',12,100},
		{5,'m',26,76}
	};
	
	// ����ɼ���ߵ�ͬѧ��ѧ�źͳɼ�
	Student* p = s;
	for (int i = 0; i < 5; i++)
	{
		if (p->score < s[i].score)
		{
			p = s + i;
		}
	}
	cout << "p->score:" << p->score << "  p->no:" << p->no <<endl;

	return 0;
}

void info(Student& stu)
{
	cout << "ѧ�ţ�" << stu.no << " �Ա�" << stu.gender << " ���䣺" << stu.age << " �ɼ���" << stu.score << endl;
}
