#include <iostream>
using namespace std;

int main()
{
	// 处理学生的成绩，输入5个学生的成绩（使用数组存储），计算平均成绩

	double score[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入学生成绩：";
		cin >> score[i];
	}

	double sum = 0, avg = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	avg = sum / 5;
	cout << "平均成绩为：" << avg << endl;


	return 0;
}