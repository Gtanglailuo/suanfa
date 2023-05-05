#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//双向栈的本质其实就是一个栈，我可以在栈的两端操作
int maxSize = 200;
struct myStack
{
    int left, right;
    int* nums;
    int max;
};
//初始化双向栈
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
        cout << "栈满" << endl;
        return;
    }

    //这里的i代表左边栈，这里的1代表右边栈
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
        cout << "你输入的i不正确，无法插入数值" << endl;
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
            //cout <<"左向输出的数值为： " << s->nums[--(s->left)] << endl;
        }
        else
        {
            cout << "左空" << endl;
        }
        return;
    }
    else if (i==1)
    {
        if (s->right != s->max-1)
        {
            x = s->nums[++(s->right)];
            //cout << "右向输出的数值为： " << s->nums[++(s->right)] << endl;
        }
        else
        {
            cout << "右空" << endl;
        }
        return;
    }

    cout << "你输入的i不正确，无法输出数值" << endl;
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
    cout <<"左向输出的元素=" << x << endl;

    int y = 0;
    Pop(s,1,y);
    cout <<"右向输出的元素=" << y << endl;
    return 0;
}

