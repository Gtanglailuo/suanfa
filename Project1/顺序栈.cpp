//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct SeqStack
//{
//    int* data;       //��ȡ���ݵ�����
//    int top;         //ջ��
//    int capacity;    //ջ����
//};
////��ʼ��ջ
//SeqStack* InitSeqStack(int size)
//{
//    SeqStack* s = new SeqStack;
//    s->data = new int[size];
//    s->top = -1;
//    s->capacity = size;
//    return s;
//}
////��ջ����
//void PushSeqStack(SeqStack* s,int x)
//{
//    if (s->top==s->capacity-1)
//    {
//        cout << "Ԫ������,�޷����Ԫ��" << endl;
//        return;
//    }
//    s->top++;
//    s->data[s->top] = x;
//}
////��ջ����
//void PopSeqStack(SeqStack* s)
//{
//    int x;
//    if (s->top==-1)
//    {
//        cout << "��ջʧ��" << endl;
//        return;
//    }
//
//    x = s->data[s->top];
//    s->top--;
//}
////ȡջ��Ԫ��
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
////�п�
//bool IsEmpty(SeqStack* s)
//{
//    if (s->top==-1)
//    {
//        return false;
//    }
//    return true;
//}
////����
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
