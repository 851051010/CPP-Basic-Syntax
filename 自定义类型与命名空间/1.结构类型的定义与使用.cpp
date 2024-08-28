#include <iostream>

using namespace std;

struct Student
{
	int no;   // 学号
	char gender; // 性别
	int age;  // 年龄
	float score; // 成绩 
};
void info(Student stu);

int main()
{
	// 定义Student类型的变量 stu1
	Student stu1;
	cout << sizeof(stu1) << endl;
	// 指定成员初始化
	stu1.no = 10000;
	stu1.score = 99;
	stu1.gender = 'f';
	stu1.age = 16;
	
	info(stu1);

	return 0;
}

void info(Student stu)
{
	cout << "学号：" << stu.no << "  性别：" << stu.gender << "  年龄：" << stu.age << "  成绩：" << stu.score << endl;
}
