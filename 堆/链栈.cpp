#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Node
{
    int data;//������
    Node* next;//ָ����
};
class LinkStack
{
public:
    Node* top;
    LinkStack();//��ʼ����ջ
    ~LinkStack();//�ͷ����н��
    bool IsEmpty();//�ж�ջ�Ƿ�Ϊ��
    void Push(int x);//��ջ����
    int Pop();//��ջ���������س�ջԪ��
    int GetPop();//ȡջ��Ԫ�أ����ı�ջ�Ľṹ
    void Display();//����������е�Ԫ��
};
LinkStack::LinkStack()
{
    top = NULL;
}

LinkStack::~LinkStack()
{
    while (top!=NULL)
    {
        Node* p = top;
        top = top->next;
        delete p;
    }
}

bool LinkStack::IsEmpty()
{
    return top==NULL;
}

void LinkStack::Push(int x)
{
    Node* p = new Node;
    p->data = x;
    p->next = top;
    top = p;
}

int LinkStack::Pop()
{
    if (IsEmpty())
    {
        cout << "���ջ�ǿյ�" << endl;
        return -1;
    }
    else
    {
        Node* p = top;
        int x = p->data;
        top = top->next;
        delete p;
        return x;
    }
}

int LinkStack::GetPop()
{
    if (IsEmpty())
    {
        cout << "���ջ�ǿյ�" << endl;
        return -1;
    }
    else
    {
        return top->data;
    }
}

void LinkStack::Display()
{
    if (IsEmpty())
    {
        cout << "���ջ�ǿյ�" << endl;

    }
    else
    {
        cout << "ջ�ı����������:";
        Node* p = top;
        while (p!=NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
}
int main1()
{
    LinkStack* s = new LinkStack;
    s->Push(1);
    s->Push(2);
    s->Push(3);
    s->Push(4);
    s->Push(5);
    s->Push(6);
    s->Push(7);
    s->Push(8);
    s->Push(9);
    s->Display();

    return 0;
}


