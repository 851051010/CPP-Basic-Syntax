#include <iostream>

//using namespace std;    使用命名空间中所有的标识符
using std::cout;    // 使用命名空间中指定的标识符
using std::endl;


// 定义命名空间
namespace NS1
{
	// 定义NS1中的成员
	int a = 10;
	void f1()
	{
		cout << "NS1::f1()" << endl;
	}
	// 命名空间允许嵌套,可以再定义命名空间
	namespace NS2
	{
		int b = 20;
		void f2()
		{
			cout << "NS2::f2()" << endl;
		}
	}
}
// 需要在命名空间定义后声明，在上方会找不到
using namespace NS1::NS2; 

// ns2 是 NS1::NS2 的别名
namespace ns2 = NS1::NS2;

int main()
{
	//命名空间::成员，可以直接使用命名空间中的成员，不需要using声明命名空i
	cout << NS1::a << endl;  // 10
	NS1::f1();   // NS1::f1()

	// 访问NS1中的NS2成员b
	cout << NS1::NS2::b << endl;  // 20
	NS1::NS2::f2();   // NS1::f2()

	cout << b << endl;  // 20
	ns2::f2();   // NS1::f2()  使用别名来获取成员

	std::cout << "mme" << std::endl;   //这样也可以
	cout << "a" << endl;

	return 0;
}