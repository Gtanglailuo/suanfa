#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//这个是一排数据
struct StackNode
{
    int data;
    StackNode* next;
};
//这个是下标索引
struct LinkStack
{
    StackNode* top;
};

//创建栈,不带头结点
LinkStack* createStack()
{
    LinkStack* link = new LinkStack;
    link->top = NULL;
    return link;
}

//判断栈是否为空
bool IsEmpty(LinkStack* link)
{
    return link->top == NULL;
}
//入栈
void push(LinkStack* link, int val)
{
    StackNode* node = new StackNode;
    node->data = val;
    node->next = NULL;
    node->next = link->top;
    link->top = node;
}
//返回栈S中结点个数
int StackSize(LinkStack *s)
{
    //如果栈空的话就返回0
    if (IsEmpty(s))
    {
        return 0;
    }
    //如果栈不为空的话
    int num = 0;
    StackNode* cur = s->top;
    while (cur!=NULL)
    {
        num++;
        cur = cur->next;
    }
    return num;
}
int main()
{
    LinkStack* head = createStack();
    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);
    cout << StackSize(head) << endl;
    return 0;
}
