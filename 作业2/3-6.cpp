#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//˫��ջ�ı�����ʵ����һ��ջ���ҿ�����ջ�����˲���
int maxSize = 200;
struct myStack
{
    int left, right;
    int* nums;
    int max;
};
//��ʼ��˫��ջ
void InitStack(myStack*s)
{   
    s->max = maxSize;
    int size= s->max;
    s->nums = new int[size];
    s->left = 0;
    s->right = size - 1;
}

void Push(myStack *s,int i,int x)
{
    if (s->left>s->right)
    {
        cout << "ջ��" << endl;
        return;
    }

    //�����i�������ջ�������1�����ұ�ջ
    if (i==0)
    {
        s->nums[s->left] = x;
        s->left++;
    }
    else if (i==1)
    {
        s->nums[s->right] = x;
        s->right--;
    }
    else
    {
        cout << "�������i����ȷ���޷�������ֵ" << endl;
        return;
    }

}

void Pop(myStack* s, int i, int &x)
{
    if (i==0)
    {
        if (s->left!=0)
        {
            x = s->nums[--(s->left)];
            //cout <<"�����������ֵΪ�� " << s->nums[--(s->left)] << endl;
        }
        else
        {
            cout << "���" << endl;
        }
        return;
    }
    else if (i==1)
    {
        if (s->right != s->max-1)
        {
            x = s->nums[++(s->right)];
            //cout << "�����������ֵΪ�� " << s->nums[++(s->right)] << endl;
        }
        else
        {
            cout << "�ҿ�" << endl;
        }
        return;
    }

    cout << "�������i����ȷ���޷������ֵ" << endl;
}

int main()
{

    myStack* s = new myStack;;
    InitStack(s);
    Push(s, 0, 1);
    Push(s, 0, 2);
    Push(s, 0, 3);
    Push(s, 1, 4);
    Push(s, 1, 5);
    Push(s, 1, 6);
    int x=0;
    Pop(s,0,x);
    cout <<"���������Ԫ��=" << x << endl;

    int y = 0;
    Pop(s,1,y);
    cout <<"���������Ԫ��=" << y << endl;
    return 0;
}

