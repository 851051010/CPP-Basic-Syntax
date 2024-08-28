#include <iostream>

using namespace std;

int main()
{
	/*
		某班有5命学生，输入每名学生的语文成绩和数学成绩（使用二维数组存储），
		然后输出每个同学的总成绩。
	*/
	double score[5][2] = {};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "请输入第" << i << "个学生成绩：";
			cin >> score[i][j];
		}
	}

	//计算总成绩
	for (int i = 0; i < 5; i++)
	{
		double sum = 0;
		cout << endl;
		for (int j = 0; j < 2; j++)
		{
			sum += score[i][j];
		}
		cout <<"总成绩为：" << sum;
	}

	cout << endl;
	//打印二维数组
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		for (int j = 0; j < 2; j++)
		{
			cout << "第" << i << "个学生的成绩为：" << score[i][j] << " \t";
		}
	}

	return 0;
}