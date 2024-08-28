#include <iostream>

using namespace std;

// 拼接字符串,第一个参数是目标字符，第二个是源字符
void my_strcat(char* p1, char* p2);

int main()
{
	char c1[20] = "ABCDEF";
	char c2[10] = "fgh123";

    my_strcat(c1, c2);
    cout << "c1:" << c1 << endl;

	return 0;
}

void my_strcat(char* p1, char* p2)
{
    int len1 = strlen(p1);
    int len2 = strlen(p2);

    for (int i = 0; i <= len2; i++)
    {
        p1[len1 + i] = p2[i];
    }
}