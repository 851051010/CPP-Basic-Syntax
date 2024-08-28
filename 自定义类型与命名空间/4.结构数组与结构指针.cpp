#include <iostream>

using namespace std;

typedef struct Student
{
	int no;   // 学号
	char gender; // 性别
	int age;  // 年龄
	float score; // 成绩 
} ;
void info(Student& stu);

int main()
{
	// 定义结构类型数组
	Student s[5] = {
		{1,'m',16,90},
		{2,'m',15,94},
		{3,'f',17,60},
		{4,'m',12,100},
		{5,'m',26,76}
	};
	
	// 输出成绩最高的同学的学号和成绩
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
	cout << "学号：" << stu.no << " 性别：" << stu.gender << " 年龄：" << stu.age << " 成绩：" << stu.score << endl;
}
