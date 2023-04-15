//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct SeqStack
//{
//    int* data;       //存取数据的数组
//    int top;         //栈顶
//    int capacity;    //栈容量
//};
////初始化栈
//SeqStack* InitSeqStack(int size)
//{
//    SeqStack* s = new SeqStack;
//    s->data = new int[size];
//    s->top = -1;
//    s->capacity = size;
//    return s;
//}
////入栈操作
//void PushSeqStack(SeqStack* s,int x)
//{
//    if (s->top==s->capacity-1)
//    {
//        cout << "元素已满,无法添加元素" << endl;
//        return;
//    }
//    s->top++;
//    s->data[s->top] = x;
//}
////出栈操作
//void PopSeqStack(SeqStack* s)
//{
//    int x;
//    if (s->top==-1)
//    {
//        cout << "出栈失败" << endl;
//        return;
//    }
//
//    x = s->data[s->top];
//    s->top--;
//}
////取栈顶元素
//int GetSeqStack(SeqStack* s)
//{
//    int x;
//    if (s->top==-1)
//    {
//        return -1;
//    }
//    x = s->data[s->top];
//    s->top--;   
//    return x;
//}
////判空
//bool IsEmpty(SeqStack* s)
//{
//    if (s->top==-1)
//    {
//        return false;
//    }
//    return true;
//}
////判满
//bool IsFull(SeqStack* s)
//{
//    if (s->top==s->capacity-1)
//    {
//        return true;
//    }
//    return false;
//}
//void ShowSeqStack(SeqStack* s)
//{
//    while (s->top!=-1)
//    {
//        cout << s->data[s->top] << " ";
//        s->top--;
//    }
//}
//int main()
//{
//    SeqStack* s=InitSeqStack(10);
//    PushSeqStack(s, 1);
//    PushSeqStack(s, 2);
//    PushSeqStack(s, 3);
//    PushSeqStack(s, 4);
//    PushSeqStack(s, 5);
//    PushSeqStack(s, 6);
//    PushSeqStack(s, 7);
//    ShowSeqStack(s);
//
//    return 0;
//}
