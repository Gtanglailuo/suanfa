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
		cout << "a是空" << endl;
	}
    
	

}
/*
那这么说，new就是给我的变量分配一个内存, 就不是原来的那个NULL地址了
下面的a是局部变量，我需要自己初始化，如果a是全局变量的话，我就不需要初始化，编译系统会自己初始化

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


