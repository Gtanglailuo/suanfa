//#include<iostream>
//using namespace std;
//#include<string>
//#include "stdio.h"
//#include "stdlib.h" 
//#include <unordered_set>
//struct Node {
//    int a; // 系数
//    int b;//指数
//    Node* next; // 指针域
//};
//Node* creatListNode()
//{
//    Node* head = new Node(),*s;
//    s= head;
//    head->next = NULL;
//    head->a = 0;
//    head->b = 0;
//    int x, y;
//    while (1)
//    {
//        
//        cout << "输入系数和指数" << endl;
//        cin >> x >> y;
//        if (x==0&&y==0)
//        {
//            break;
//        }
//        Node* cur = new Node;
//        cur->next = NULL;
//        cur->a = x,cur->b=y;
//        s->next = cur;
//        s = cur;
//    }
//    s->next = NULL;
//    return head;
//}
//Node* Attach(int a,int b,Node*temp)
//{
//    Node* m = new Node;
//    m->a = a, m->b = b, m->next = NULL;
//    temp->next = m;
//    temp = m;
//    return temp;
//}
//Node* Add(Node*head1,Node*head2)
//{
//    Node* newHead = new Node,*temp;
//    newHead->next = NULL,newHead->a=0,newHead->b=0;
//    Node* cur = newHead;
//    Node* p = head1->next, * q = head2->next;
//    while (p&&q)
//    {
//        if (p->b > q->b)
//        {
//            cur=Attach(q->a,q->b,cur);
//            q = q->next;
//        }
//        else if (p->b < q->b)
//        {
//            cur=Attach(p->a,p->b,cur);
//            p = p->next;
//        }
//        else
//        {
//            int sum = p->a + q->a;
//            if (sum)
//            {
//                cur=Attach(sum,p->b,cur);
//            }
//            p = p->next, q = q->next;
//        }
//
//    }
//    for (;p;p=p->next)
//    {
//       cur= Attach(p->a,p->b,cur);
//    }
//    for (; q; q = q->next)
//    {
//       cur= Attach(q->a, q->b, cur);
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
//    if (p==NULL)
//    {
//        cout << "!!!!!!!!!!!!!!!!!!!!!!" << endl;
//        return;
//    }
//    Node* q = p->next;
//    cout << "分布如下" << endl;
//    cout << "指数" << "   " << "系数" << endl;
//    while (q)
//    {
//        cout << q->a << "      " << q->b<<endl;
//        q = q->next;
//    }
//
//}
//void show1(Node*p)
//{
//    cout << "分布如下" << endl;
//    cout << "指数" << "   " << "系数" << endl;
//    while (p)
//    {
//        cout << p->a << "      " << p->b << endl;
//        p = p->next;
//    }
//
//
//}
//
//
//int main()
//{
//    cout << "第一个多项式：" << endl;
//    Node* p = creatListNode();
//    show(p);
//
//    cout << "第二个多项式：" << endl;
//    Node* q = creatListNode();
//    cout << "他们相加如下：" << endl;
//    show1(Add(p,q));
//
//
//
//
//
//
//
//
//
//
//
//    return 0;
//}
