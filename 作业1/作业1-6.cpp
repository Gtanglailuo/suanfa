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
//int List_Size(Node* newHead)
//{
//    int size = 0;
//    while (newHead)
//    {
//        size++;
//        newHead = newHead->next;
//    }
//
//    return size;
//}
//void Add(Node* p1)
//{
//    Node* cur = p1->next;
//    int temp = cur->data;
//    while (cur)
//    {
//        if (cur->data>=temp)
//        {
//            temp = cur->data;
//        }
//        cur = cur->next;
//    }
//
//    cout << "���Ľ���ֵΪ��" << temp<< endl;
//}
//
//int main()
//{
//    Node* p1 = createList();
//    //Node* p2 = createList();
//    Add(p1);
//
//
//    return 0;
//}
//
//
//
//
//
