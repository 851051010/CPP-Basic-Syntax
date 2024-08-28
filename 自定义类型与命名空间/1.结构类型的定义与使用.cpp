#include <iostream>

using namespace std;

struct Student
{
	int no;   // 学号
	char gender; // 性别
	int age;  // 年龄
	float score; // 成绩 
} stu3, stu4;   // 定义结构同时定义结构变量

void info(Student& stu);

int main()
{
	// 定义Student类型的变量 stu1
	Student stu1,stu2;
	cout << sizeof(stu1) << endl;
	// 指定成员初始化
	stu1.no = 10000;
	stu1.score = 99;
	stu1.gender = 'f';
	stu1.age = 16;

	stu2 = { 10001,'m',18,80 };
	
	info(stu1);
	info(stu2);
	
	// 结构变量给结构变量赋值是对应成员之间进行赋值
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
	cout << "学号：" << stu.no << "  性别：" << stu.gender << "  年龄：" << stu.age << "  成绩：" << stu.score << endl;
}
