#include <iostream>
using namespace std;
int main()
{
	/*
		malloc���붯̬�ڴ�ʱ����С�ɲ���������
		����ɹ�ʱ���ص�ַ��ʧ��ʱ����NULL��
	*/

	// malloc ���䵥���洢�ռ�
	int* p = (int *)malloc(sizeof(int));
	float* p = (float *)malloc(sizeof(float));  //ʲô���;���ʲô���͵Ĵ�С
	*p = 100;
	cout << "*p:" << *p << endl;  // *p:100
	// �ͷŵ����洢�ռ�
	free(p);

	//���������ڴ�ռ�
	p = (int*)malloc(sizeof(int) * 5);
	p[1] = 123;
	cout << "*(p + 1):" << *(p + 1) << endl;  //*(p + 1):123
	// �ͷŵ����洢�ռ�
	free(p);
	
	return 0;
}