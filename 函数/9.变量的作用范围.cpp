#include <iostream>

using namespace std;

// ����ȫ�ֱ���
int i = 100;

void func()
{
    cout << "func i:" << i << endl;
}

int main()
{   
    // ����ֲ�����
    int i = 10;
    // ����ͬ���ľֲ�������ȫ�ֱ��������ȷ��ʾֲ�����
    cout << "main i:" << i << endl;   // main i:10
    // ͨ��::i����ȫ�ֱ��� i
    ::i++;
    cout << "main ::i:" << ::i << endl;  // main ::i:100 
    func();
    return 0;
}


    
