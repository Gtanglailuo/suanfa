#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
    1.顺序栈的本质是什么？
      一个有固定容量的数组，里面的元素是先进后出
    2.如果我要访问里面的元素该怎么做？
      这个栈中有一个访问索引下标，它可以从0开始也可以从-1开始


*/
struct SNode
{
    int* data;
    int Top;
    int MaxSize;
};
//这里是创建一个容量为num的栈，它的访问索引下标是-1
SNode* CreateStack(int num)
{
    SNode* s = new SNode;
    s->data = new int[num];
    s->Top = -1;
    s->MaxSize = num;
    return s;
}

//这里是判断栈是否是满的，依据是栈的访问索引下标是否为容量-1
bool IsFull(SNode *s)
{
    return (s->Top==s->MaxSize-1);
}

//入栈，访问索引下标为-1，就要这么写
void Push(SNode* s,int data)
{
    if (IsFull(s))
    {
        cout << "栈已满，不能添加元素" << endl;
        return;
    }
    //i++是先赋值然后++，++i是先自增然后赋值
    s->data[++(s->Top)] = data;
}

//访问索引小标如果为原始的值，那么这个栈就是空栈
bool IsEmpty(SNode*s)
{
    return (s->Top==-1);
}

//先把元素给取出来，然后做--操作
int Pop(SNode*s)
{
    if (IsEmpty(s))
    {
        cout << "栈是空,我将返回0" << endl;
        return 0;
    }
    return (s->data[(s->Top)--]);
    //i--是先赋值然后--，--i是先减然后赋值
}
//直接取首元素
int GetNum(SNode* s)
{
    if (IsEmpty(s))
    {
        cout << "栈是空,我将返回";
        return 0;
    }
    return (s->data[s->Top]);


}
void Show(SNode* s)
{
    cout << "栈的数据：";
    while (s->Top!=-1)
    {
        cout << s->data[(s->Top)--] << " ";
    }
}
int main()
{
    SNode *s=CreateStack(100);
    Push(s, 1);
    Push(s, 2);
    Push(s, 3);
    Push(s, 4);
    //出栈操作
    cout << Pop(s)<<endl;
    
    Show(s);//如果我把这个函数放在前面的话，会出现空的情况
    //获取栈顶元素
    cout << GetNum(s) << endl;
    return 0;
}
