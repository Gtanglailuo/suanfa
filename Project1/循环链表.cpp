//#include<iostream>
//#include<stdio.h>
//#include<string>
//using namespace std;
//struct Node {
//    int data; // 数据域
//    Node* next; // 指针域
//};
//
////13.求出循环链表中结点的个数
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
////14.删除循环链表中指针s结点的前驱结点
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
