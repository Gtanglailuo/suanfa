//#include<iostream>
//using namespace std;
//#include<string>
//#include "stdio.h"
//#include "stdlib.h" 
//#include <unordered_set>
//struct Node {
//    int data; // ������
//    Node* next; // ָ����
//};
//// ����һ������
//Node* createList() {
//    // ����ͷ�ڵ�
//    Node* head = new Node();
//    head->data = -1; // ͷ�ڵ����������Բ��洢��Ч����
//    head->next = nullptr; // ͷ�ڵ��ָ�����ʼ��Ϊ��
//
//    // ����βָ�룬���ڲ����½ڵ�
//    Node* tail = head;
//
//    // ѭ���������ݣ�ֱ������-1Ϊֹ
//    int x;
//    while (cin >> x) {
//        if (x == -1) break; // ����-1��ʾ����
//
//        // �����½ڵ㣬����ֵ����
//        Node* newNode = new Node();
//        newNode->data = x;
//        newNode->next = nullptr;
//
//        // ���½ڵ���뵽β����������βָ��
//        tail->next = newNode;
//        tail = newNode;
//    }
//
//    // ����ͷ�ڵ�ĵ�ַ
//    return head;
//}
//Node* Add(Node*p1, Node*p2)
//{
//    Node* q1 = p1->next;
//    Node* q2 = p2->next;
//    Node* cur = p1,*q;
//    Node* newhead = cur;
//    while (q1&&q2)
//    {
//        if (q1->data < q2->data)
//        {
//            cur->next = q1;
//            cur = q1;
//            q1 = q1->next;
//        }
//        else if (q1->data > q2->data)
//        {
//            cur->next = q2;
//            cur = q2;
//            q2 = q2->next;
//        }
//        else
//        {
//            cur->next = q1;
//            cur = q1;
//            q1 = q1->next;
//            q = q2->next;
//            delete q2;
//            q2 = q;
//        }
//    }
//    cur->next = q1 ? q1: q2;
//    return newhead->next;
//}
//void Show_ALLNUM(Node* newHead)
//{
//    if (newHead == NULL)
//    {
//        cout << "�������Ϊ��" << endl;
//        return;
//    }
//    while (newHead)
//    {
//        cout << newHead->data << " ";
//        newHead = newHead->next;
//    }
//    cout << endl;
//}
//int main()
//{
//    Node* p1 = createList();
//    Node* p2 = createList();
//    Show_ALLNUM(Add(p1,p2));
//    
//
//	return 0;
//}
//
//
//
//
//
