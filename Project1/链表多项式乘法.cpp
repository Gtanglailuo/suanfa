//#include<iostream>
//using namespace std;
//#include<string>
//#include "stdio.h"
//#include "stdlib.h" 
//#include <unordered_set>
//struct Node {
//    int a; // ϵ��
//    int b;//ָ��
//    Node* next; // ָ����
//};
//Node* creatListNode()
//{
//    Node* head = new Node(), * s;
//    s = head;
//    head->next = NULL;
//    head->a = 0;
//    head->b = 0;
//    int x, y;
//    while (1)
//    {
//
//        cout << "����ϵ����ָ��" << endl;
//        cin >> x >> y;
//        if (x == 0 && y == 0)
//        {
//            break;
//        }
//        Node* cur = new Node;
//        cur->next = NULL;
//        cur->a = x, cur->b = y;
//        s->next = cur;
//        s = cur;
//    }
//    s->next = NULL;
//    return head;
//}
//void Attach(int a, int b, Node** temp)
//{
//    Node* m = new Node;
//    m->a = a, m->b = b, m->next = NULL;
//    (*temp)->next = m;
//    *temp = m;
//}
//Node* Add(Node* head1, Node* head2)
//{
//    Node* newHead = new Node, * temp;
//    newHead->next = NULL, newHead->a = 0, newHead->b = 0;
//    Node* cur = newHead;
//    Node* p = head1->next, * q = head2->next;
//    while (p && q)
//    {
//        if (p->b > q->b)
//        {
//            Attach(q->a, q->b, &cur);
//            q = q->next;
//        }
//        else if (p->b < q->b)
//        {
//            Attach(p->a, p->b, &cur);
//            p = p->next;
//        }
//        else
//        {
//            int sum = p->a + q->a;
//            if (sum)
//            {
//                Attach(sum, p->b, &cur);
//            }
//            p = p->next, q = q->next;
//        }
//
//    }
//    for (; p; p = p->next)
//    {
//        Attach(p->a, p->b, &cur);
//    }
//    for (; q; q = q->next)
//    {
//        Attach(q->a, q->b, &cur);
//    }
//
//    //cur->next = NULL;
//    temp = newHead;
//    newHead = newHead->next;
//    delete temp;
//    return newHead;
//
//}
//void show(Node* p)
//{
//    if (p == NULL)
//    {
//        cout << "!!!!!!!!!!!!!!!!!!!!!!" << endl;
//        return;
//    }
//    Node* q = p->next;
//    cout << "�ֲ�����" << endl;
//    cout << "ָ��" << "   " << "ϵ��" << endl;
//    while (q)
//    {
//        cout << q->a << "      " << q->b << endl;
//        q = q->next;
//    }
//
//}
//void show1(Node* p)
//{
//    cout << "�ֲ�����" << endl;
//    cout << "ָ��" << "   " << "ϵ��" << endl;
//    while (p)
//    {
//        cout << p->a << "      " << p->b << endl;
//        p = p->next;
//    }
//
//
//}
//Node* Mult(Node* head1, Node* head2)
//{
//    Node* newHead = new Node;
//    newHead->next = NULL,newHead->a=0,newHead->b=0;
//    Node* p = head1->next, * q = head2->next;
//    Node* cur = newHead,*t1=p,*t2=q;
//    int e, c;
//    while (t2)
//    {
//        Attach(t1->a* t2->a,t1->b+ t2->b,&cur);
//        t2 = t2->next;
//    }
//    t1 = t1->next;
//    while (t1)
//    {
//        t2 = q; cur = newHead;
//        while (t2)
//        {
//            c = t1->a * t2->a;//ϵ��
//            e = t1->b + t2->b;//ָ��
//            
//            while (cur->next&&cur->next->b<e)
//            {
//                cur = cur->next;
//                if (cur->next && cur->next->b == e)
//                {
//                    //���ϵ�����Ϊ0�Ļ�����ɾ��������
//                    if (cur->next->a + c)
//                    {
//                        cur->next->a += c;
//                    }
//                    else
//                    {
//                        Node* t = cur->next;
//                        cur->next = t->next;
//                        delete t;
//                    }
//                }
//                else
//                {
//                    Node* temp = new Node;
//                    temp->a = c, temp->b = e;
//                    temp->next = cur->next;
//                    cur->next = temp;
//                    cur = cur->next;
//                }
//            }
//            t2 = t2->next;
//        }
//        t1 = t1->next;
//    }
//    return newHead;
//}
//int main()
//{
//    cout << "��һ������ʽ��" << endl;
//    Node* p = creatListNode();
//    //show(p);
//
//    cout << "�ڶ�������ʽ��" << endl;
//    Node* q = creatListNode();
//    //cout << "����������£�" << endl;
//    //show1(Add(p, q));
//    cout << "����������£�" << endl;
//    show(Mult(p,q));
//    return 0;
//}
