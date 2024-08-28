#include <iostream>

using namespace std;

// 定义全局变量
int i = 100;

void func()
{
    cout << "func i:" << i << endl;
}

int main()
{   
    // 定义局部变量
    int i = 10;
    // 出现同名的局部变量和全局变量，优先访问局部变量
    cout << "main i:" << i << endl;   // main i:10
    // 通过::i访问全局变量 i
    ::i++;
    cout << "main ::i:" << ::i << endl;  // main ::i:100 
    func();
    return 0;
}


    
