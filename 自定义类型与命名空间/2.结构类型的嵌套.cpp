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
	int no;   // 学号
	char gender; // 性别
	int age;  // 年龄
	float score; // 成绩 
	Date birthday; // 生日
	/*
		Student stu：不允许，结构中不能嵌套自己。
		Student *stu：允许，结构中允许定义指向自己的指针。
	*/
};

void info(Student& stu);

int main()
{
	Student stu1, stu2;
	// 指定成员初始化
	stu1.no = 10000;
	stu1.score = 99;
	stu1.gender = 'f';
	stu1.age = 16;
	stu1.birthday.day = 1;
	stu1.birthday.month = 6;
	stu1.birthday.year = 2021;

	// 顺序初始化
	stu2 = { 10001,'m',16,80,{2024,8,21} };

	info(stu1);
	info(stu2);
	return 0;
}

void info(Student& stu)
{
	cout << "学号：" << stu.no << "  性别：" << stu.gender << "  年龄：" << stu.age << "  成绩：" << stu.score ;
	cout << "  出生日期：" << stu.birthday.year << "-" << stu.birthday.month << "-" << stu.birthday.day << endl;
}
