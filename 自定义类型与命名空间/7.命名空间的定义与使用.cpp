#include <iostream>

//using namespace std;    ʹ�������ռ������еı�ʶ��
using std::cout;    // ʹ�������ռ���ָ���ı�ʶ��
using std::endl;


// ���������ռ�
namespace NS1
{
	// ����NS1�еĳ�Ա
	int a = 10;
	void f1()
	{
		cout << "NS1::f1()" << endl;
	}
	// �����ռ�����Ƕ��,�����ٶ��������ռ�
	namespace NS2
	{
		int b = 20;
		void f2()
		{
			cout << "NS2::f2()" << endl;
		}
	}
}
// ��Ҫ�������ռ䶨������������Ϸ����Ҳ���
using namespace NS1::NS2; 

// ns2 �� NS1::NS2 �ı���
namespace ns2 = NS1::NS2;

int main()
{
	//�����ռ�::��Ա������ֱ��ʹ�������ռ��еĳ�Ա������Ҫusing����������i
	cout << NS1::a << endl;  // 10
	NS1::f1();   // NS1::f1()

	// ����NS1�е�NS2��Աb
	cout << NS1::NS2::b << endl;  // 20
	NS1::NS2::f2();   // NS1::f2()

	cout << b << endl;  // 20
	ns2::f2();   // NS1::f2()  ʹ�ñ�������ȡ��Ա

	std::cout << "mme" << std::endl;   //����Ҳ����
	cout << "a" << endl;

	return 0;
}