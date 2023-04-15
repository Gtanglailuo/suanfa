#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct SNode
{
    int* data;
    int Top;
    int MaxSize;
};
SNode* CreateStack(int num)
{
    SNode* s = new SNode;
    s->data = new int[num];
    s->Top = -1;
    s->MaxSize = num;
    return s;
}
bool IsFull(SNode *s)
{
    return (s->Top==s->MaxSize-1);
}
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
bool IsEmpty(SNode*s)
{
    return (s->Top==-1);
}
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
