#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Node
{
    int data;//数据域
    Node* next;//指针域
};
class LinkStack
{
public:
    Node* top;
    LinkStack();//初始化空栈
    ~LinkStack();//释放所有结点
    bool IsEmpty();//判断栈是否为空
    void Push(int x);//入栈操作
    int Pop();//出栈操作，返回出栈元素
    int GetPop();//取栈顶元素，不改变栈的结构
    void Display();//遍历输出所有的元素
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
        cout << "这个栈是空的" << endl;
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
        cout << "这个栈是空的" << endl;
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
        cout << "这个栈是空的" << endl;

    }
    else
    {
        cout << "栈的遍历结果如下:";
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


