#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void func(int *a)
{
	a = new int;
	cout << a << endl;
	if (a == NULL)
	{
		cout << "a�ǿ�" << endl;
	}
    
	

}
/*
����ô˵��new���Ǹ��ҵı�������һ���ڴ�, �Ͳ���ԭ�����Ǹ�NULL��ַ��
�����a�Ǿֲ�����������Ҫ�Լ���ʼ�������a��ȫ�ֱ����Ļ����ҾͲ���Ҫ��ʼ��������ϵͳ���Լ���ʼ��

*/


int main()
{
	int* a{};
	cout << a << endl;
	func(a);
	int b;
	cout << &b << endl;

    return 0;
}


