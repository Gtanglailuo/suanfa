//#include<iostream>
//#include<stdio.h>
//#include<string>
//using namespace std;
//struct Node {
//    int data; // ������
//    Node* next; // ָ����
//};
//
////13.���ѭ�������н��ĸ���
//int Node_Num(Node* newHead)
//{
//    int num = 1;
//    Node* temp = newHead,*p=newHead->next;
//
//    while (p!= temp)
//    {
//        num++;
//        p = p->next;
//    }
//
//    return num;
//}
////14.ɾ��ѭ��������ָ��s����ǰ�����
//void delete_SNode(Node* s, Node* newHead)
//{
//    Node* p = newHead;
//    while (p!=s)
//    {
//        p = p->next;
//    }
//    Node* q = p->next;
//    p->next = p->next->next;
//    delete q;
//}
//
//
//
//int main()
//{
//
//
//    return 0;
//}
//
