#include <iostream>

using namespace std;

int main()
{
	int year, month;

	cout << "请输入按顺序输入年份和月份，中间用空格隔开：";
	cin >> year >> month;

	if ( year >=0 || month >= 1 || month <= 12 )
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{ 
			cout << "天数为：31天" << endl;
		}
		else if (month == 2)
		{
			if (( year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0 ))
			{
				cout << "天数为：29天" << endl;
			}
			else
			{
				cout << "天数为：28天" << endl;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			cout << "天数为：30天" << endl;
		}
		else
		{
			cout << "非法输入" << endl;
		}

	return 0;
}
