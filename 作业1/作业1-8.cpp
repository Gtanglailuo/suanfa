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
//Node* Add(Node* p1,int mink,int maxk)
//{
//    Node* pa = p1->next;
//    Node* temp = p1;
//    while (pa)
//    {
//        if (pa->data>=mink&&pa->data<=maxk)
//        {
//            temp->next = pa->next;
//            delete pa;
//            pa = temp->next;
//        }
//        else
//        {
//            temp = temp->next;
//            pa = pa->next;
//        }
//        
//    }
//
//    return p1->next;
//
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
//    Show_ALLNUM(Add(p1,4,9));
//
//
//    return 0;
//}
//
//
//
//
//
