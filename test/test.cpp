#include <iostream>
using namespace std;

#include <stdlib.h>

typedef char DataType;

//��������㶨�� 
//�˴����ж������ṹ����
/*-------begin------*/
//��������㶨�� 
struct node
{
    DataType data; //��Ž������ 
    struct node* lchild, * rchild; //���Һ���ָ�� 
};
typedef struct  node  BiTree;
typedef struct  node* ptree;

/*-----end---------*/



void print(DataType d)
{
    cout << d << " ";
}

//��ʼ���������Ľ������
char treeData[] = "ABC##D##E#F#G##";

/*
��������createBiTree
�������ܣ���ȡtreeData �����е��ַ����н��ж����������������������ض������ĸ����ָ��
��������
����ֵ���������ĸ����ָ��
*/
//�ڴ˴��������
/*----------begin-------------*/
ptree createBiTree(char*& p) {
    char data = *p++;
    if (data == '#') {
        return NULL;
    }
    ptree root = new node();
    root->data = data;
    root->lchild = createBiTree(p);
    root->rchild = createBiTree(p);
    return root;
}

ptree createBiTree() {
    char* p = treeData;
    return createBiTree(p);
}


/*----------end-------------*/

void Sibling(ptree T)
{
    if (!T) return;
    while (T->lchild || T->rchild) {
        if (T->rchild) {
            cout << T->rchild->data << " ";
            T = T->rchild;
        }
        else {
            cout << T->lchild->data << " ";
            T = T->lchild;
        }
    }
}

/*
��������preOrder
�������ܣ��ȸ����������� �����ҵ�ֵΪch�Ľ��ָ��
�����������ָ�� BiTree *T  ,����ҵĽ��ֵ ch
����ֵ����
*/

//�ڴ˴��������,��������������ҵ����ֵch����ú���sibling����ý��������ֵܽ��ã��Կո�ֽ�
 /*----------begin-------------*/
void preOrder(BiTree*T,char ch)
{

    if (T==NULL)
    {
        return;
    }
    if (T->data==ch)
    {
        Sibling(T); 
    }
    preOrder(T->lchild,ch);
    preOrder(T->rchild, ch);
}
 /*----------end-------------*/

int main(void)
{
    BiTree* T;
    T = createBiTree(); //����������

    char ch;
    cin >> ch; //����ĳ�˵Ĵ���
    preOrder(T, ch); //���ú������ch�������ֵܽ���

    return 1;
}