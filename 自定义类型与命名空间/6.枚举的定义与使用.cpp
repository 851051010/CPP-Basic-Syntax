#include <iostream>

using namespace std;

// 定义枚举类型 ,其中weekday是说明文字， {} 里面的才是枚举类型
//enum weekday{Sun, Mon, Tue, Wed, Thu, Fri, Sat};  // 0 1 2 3 4 5 6


//	枚举类型中的各元素不能重复:
//	enum weekday{Sun, Mon, Tue, Wed, Thu, Fri, Sat, Sat}; // 不允许，Sat重复了。

/*
	如果不指定枚举元素的起始值，将自动从 0 开始为各个元素设置初始值，后面的枚举元素依次增加 1。
	如果指定某个枚举元素的值，而下一个枚举元素如果没有指定值，就是上一个枚举元素的值 +1。
	一般枚举类型用的都是默认值。
*/
enum weekday{Sun, Mon, Tue = 9, Wed, Thu = 20, Fri, Sat};

int main()
{
	cout << "Sun:" << Sun << endl;  //Sun:0
	cout << "Mon:" << Mon << endl;  //Mon:1
	cout << "Tue:" << Tue << endl;  //Tue:9
	cout << "Wed:" << Wed << endl;  //Wed:10
	cout << "Thu:" << Thu << endl;  //Thu:20
	cout << "Fri:" << Fri << endl;  //Fri:21
	cout << "Sat:" << Sat << endl;  //Sat:22


	int day;
	cin >> day;
	// 把枚举类型写成case的条件
	switch (day)
	{
	case Sun:
		cout << "星期日" << endl;
		break;
	case Mon:
		cout << "星期一" << endl;
		break;
	case Tue:
		cout << "星期二" << endl;
		break;
	}

	return 0;
}