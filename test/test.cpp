#include <iostream>
using namespace std;

#include <stdlib.h>

typedef char DataType;

//二叉树结点定义 
//此处进行二叉树结构定义
/*-------begin------*/
//二叉树结点定义 
struct node
{
    DataType data; //存放结点数据 
    struct node* lchild, * rchild; //左右孩子指针 
};
typedef struct  node  BiTree;
typedef struct  node* ptree;

/*-----end---------*/



void print(DataType d)
{
    cout << d << " ";
}

//初始化二叉树的结点序列
char treeData[] = "ABC##D##E#F#G##";

/*
函数名：createBiTree
函数功能：读取treeData 数组中的字符序列进行二叉树创建二叉树，并返回二叉树的根结点指针
参数：无
返回值：二叉树的根结点指针
*/
//在此处填入代码
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
函数名：preOrder
函数功能：先根遍历二叉树 ，并找到值为ch的结点指针
参数：根结点指针 BiTree *T  ,需查找的结点值 ch
返回值：无
*/

//在此处填入代码,利用先序遍历，找到结点值ch后调用函数sibling输出该结点的所有兄弟姐妹，以空格分界
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
    T = createBiTree(); //创建二叉树

    char ch;
    cin >> ch; //输入某人的代号
    preOrder(T, ch); //调用函数输出ch的所有兄弟姐妹

    return 1;
}