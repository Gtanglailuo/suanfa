#include <stdio.h>
#include <stdlib.h>
struct node
{//���������ͣ�����һ������������ݵ� data ��Ա����һ��ָ����һ������next��Ա
    int data;
    struct node* next;
};

struct node* mycreateList()
{//�������ܣ�����һ��ֻ��һ��ͷ���Ŀ�����ͷ�ڵ��������ֵΪ0��������ͷ���ĵ�ַ����
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    return head;
}


void myinsertHead(struct node* head, int insData)
{
    /*�������ܣ�ʵ����headΪ��ͷ��������ʹ��ͷ�巨����������Ԫ��insData*/
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = insData;
    p->next = head->next;
    head->next = p;
}

void myinsertTail(struct node* head, int insData)
{
    /*��headΪ��ͷ�ĵ������β��������Ԫ��insData*/
    struct node* p, * q;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = insData;
    p->next = NULL;
    q = head;
    while (q->next != NULL)
        q = q->next;
    q->next = p;
}

void myprintList(struct node* L)
{
    /*���headΪ��ͷ�������е�����Ԫ�أ�ÿ���һ�����ݿ�һ��*/
    struct node* p = L->next;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void genNumber(struct node* A, int num)
{//���������ڽ�������Ĵ����ĸ���λ�����ش��������ͷ����ʹ��������ʵ�ֵ�������뺯��
/*------begin---------*/
    int i, n;
    for (i = 0; i < num; i++)
    {
        scanf("%d", &n);
        myinsertHead(A, n);
    }
/*------end---------*/
}

struct node* addNumber(struct node* A, struct node* B)
{
    //�˴�ʵ�ֺ�����������ӣ������غ�ֵ����ı�ͷ��
    /*------begin---------*/
    


  /*------end---------*/
}
int main() 
{





    return 0;

}