//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct Queue
//{
//    int front, rear;//ͷ��β
//    int* value;
//    int MaxSize;
//};
//Queue* CreateQueue(int num)
//{
//    Queue* q = new Queue;
//    q->value = new int[num];
//    q->front = q->rear = 0;
//    return q;
//}
////�ж϶���
//bool QueueFull(Queue*q)
//{
//    return q->rear -q->front==q->MaxSize;
//}
////�ж϶ӿ�
//bool QueueEmpty(Queue *q)
//{
//    return q->front == q->rear;
//}
////��Ӳ���
//void EnQueue(Queue* q,int x)
//{
//    if (QueueFull(q))
//    {
//        cout << "��������" << endl;
//        return;
//    }
//    q->value[q->rear] = x;
//    q->rear = q->rear + 1;
//}
////���Ӳ���
//int DeQueue(Queue* q)
//{
//    if (QueueEmpty(q))
//    {
//        cout << "����Ϊ�գ��ҽ�����0" << endl;
//        return 0;
//    }
//    int x = q->value[q->front];
//    q->front = q->front + 1;
//    return x;
//}
//void show(Queue* q)
//{
//    cout << "���е����ݣ�";
//    while (q->front<q->rear)
//    {
//        cout << q->value[q->front++] << " ";
//    }
//
//}
//int main()
//{
//    Queue* q = CreateQueue(100);
//    EnQueue(q, 1);
//    EnQueue(q, 2);
//    EnQueue(q, 3);
//    EnQueue(q, 4);
//    EnQueue(q, 5);
//    cout <<"����Ԫ�أ�"<< DeQueue(q) << endl;
//    show(q);
//
//
//
//    return 0;
//}
//
//
