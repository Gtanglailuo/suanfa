#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//�����һ������
struct StackNode
{
    int data;
    StackNode* next;
};
//������±�����
struct LinkStack
{
    StackNode* top;
};

//����ջ,����ͷ���
LinkStack* createStack()
{
    LinkStack* link = new LinkStack;
    link->top = NULL;
    return link;
}

//�ж�ջ�Ƿ�Ϊ��
bool IsEmpty(LinkStack* link)
{
    return link->top == NULL;
}
//��ջ
void push(LinkStack* link, int val)
{
    StackNode* node = new StackNode;
    node->data = val;
    node->next = NULL;
    node->next = link->top;
    link->top = node;
}
//����ջS�н�����
int StackSize(LinkStack *s)
{
    //���ջ�յĻ��ͷ���0
    if (IsEmpty(s))
    {
        return 0;
    }
    //���ջ��Ϊ�յĻ�
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
