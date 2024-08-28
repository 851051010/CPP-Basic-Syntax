#include <iostream>

using namespace std;

// 定义结构类型student的同时使用typedef定义别名
typedef struct Student
{
	int no;   // 学号
	char gender; // 性别
	int age;  // 年龄
	float score; // 成绩 
} stu3, stu4; //  定义结构同时定义简洁名称stu3和stu3。

// 定义结构类型student后，使用typedef定义简洁名称:
typedef Student stu1;

// 声明结构类型时，使用typedef定义简洁名称:
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
	cout << "学号：" << stu.no << " 性别：" << stu.gender << " 年龄：" << stu.age << " 成绩：" << stu.score << endl;
}
