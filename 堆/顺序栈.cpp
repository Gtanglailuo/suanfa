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
        cout << "ջ�������������Ԫ��" << endl;
        return;
    }
    //i++���ȸ�ֵȻ��++��++i��������Ȼ��ֵ
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
        cout << "ջ�ǿ�,�ҽ�����0" << endl;
        return 0;
    }
    return (s->data[(s->Top)--]);
    //i--���ȸ�ֵȻ��--��--i���ȼ�Ȼ��ֵ
}
int GetNum(SNode* s)
{
    if (IsEmpty(s))
    {
        cout << "ջ�ǿ�,�ҽ�����";
        return 0;
    }
    return (s->data[s->Top]);


}
void Show(SNode* s)
{
    cout << "ջ�����ݣ�";
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
    //��ջ����
    cout << Pop(s)<<endl;
    
    Show(s);//����Ұ������������ǰ��Ļ�������ֿյ����
    //��ȡջ��Ԫ��
    cout << GetNum(s) << endl;
    return 0;
}
