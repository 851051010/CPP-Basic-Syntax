#include <iostream>

using namespace std;

int main()
{
	int year, month;

	cout << "�����밴˳��������ݺ��·ݣ��м��ÿո������";
	cin >> year >> month;

	if ( year >=0 || month >= 1 || month <= 12 )
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{ 
			cout << "����Ϊ��31��" << endl;
		}
		else if (month == 2)
		{
			if (( year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0 ))
			{
				cout << "����Ϊ��29��" << endl;
			}
			else
			{
				cout << "����Ϊ��28��" << endl;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			cout << "����Ϊ��30��" << endl;
		}
		else
		{
			cout << "�Ƿ�����" << endl;
		}

	return 0;
}
