#include <iostream>

using namespace std;

int main()
{
	// 求斐波那契数列前40项
        int n = 40;
        int fib[40]; 
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i < n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << "斐波那契数列前 10 项：" << endl;
        for (int i = 0; i < n; i++) {
            cout << fib[i] << " ";
        }
        cout << endl;
	return 0;
}