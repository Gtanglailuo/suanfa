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
//Node* Add(Node* p1, Node* p2)
//{
//    Node* cur = p1;
//    Node* pa = p1->next;
//    Node* pb = p2->next;
//    Node* newhead = cur,*temp;
//    while (pa&&pb)
//    {
//        if (pa->data < pb->data)
//        {
//            temp = pa->next;
//            delete pa;
//            pa = temp;
//        }
//        else if (pa->data > pb->data)
//        {
//            temp = pb->next;
//            delete pb;
//            pb = temp;
//        }
//        else
//        {
//            cur->next = pa;
//            cur = pa;
//            pa = pa->next;  
//            temp = pb->next;
//            delete pb;
//            pb = temp;
//        }
//    }
//    if (cur!=NULL)
//    {
//        cur->next = NULL;
//    }
//    else
//    {
//        cur = NULL;
//    }
//
//    return newhead->next;
//
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
//    Show_ALLNUM(Add(p1, p2));
//
//
//    return 0;
//}
//
//
//
//
//
