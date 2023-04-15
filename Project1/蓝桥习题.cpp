#include <iostream>
#include <string>
#include <algorithm>
#include<stack>
#include<queue>
#include <vector>
#include <set>
using namespace std;
#include<unordered_set>
#include<unordered_map>
#include <stdlib.h>
#include <stdio.h> 
typedef int DataType;

struct  node
{
    DataType  element;
    struct node* next;
};
typedef struct node* SET;
void insert(DataType datax, SET set);

/*
  函数名： InitSet
  函数功能：根据参数num，初始化集合
  函数参数：集合元素的个数
  返回值：集合头指针
*/
SET InitSet(int num)
{

    SET p;
    p = (struct  node*)malloc(sizeof(struct node));
    p->next = NULL;
    p->element = num;
    int temp;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &temp);
        insert(temp, p); //调用insert函数，将输入数据插入集合
    }
    return p;
}


/*
  函数名： find
  函数功能：在集合中查找值为datax的成员
  函数参数：datax:待查找的值 ； set：集合的头结点
  返回值：找到值为datax的成员返回1，否则返回0
*/
int find(DataType datax, SET  set)
{
    //请在此处填写代码，在set集合中查找值为datax的成员，若找到返回1，否则返回0
    /**********  Begin  **********/
    SET cur = set->next;
    while (cur)
    {
        if (cur->element==datax)
        {
            return 1;
        }
        cur = cur->next;
    }
    return 0;
    /**********   End   **********/
}

/*
  函数名： insert
  函数功能：在集合set中插入值为datax的成员 ，插入位置在表头
  函数参数：datax:待插入的值 ； set：集合的头结点
  返回值：无
  时间复杂度：O（1）
*/
void insert(DataType datax, SET set)
{
    //请在此处填写代码，将datax插入集合set， 注意因集合元素是无序的，只需将新成员插入表头
    /**********  Begin  **********/
    SET cur;
    cur->element = datax;
    cur->next = NULL;
    cur->next = set->next;
    set->next = cur;
    /**********   End   **********/
}

/*
  函数名： copyList
  函数功能：将集合setA复制生成集合setB
  函数参数：setA 、setB的头结点
  返回值：无
*/
void copySet(SET setA, SET setB)
{
    //请在此处填写代码，实现将集合setA的成员复制到集合setB的功能
    /**********  Begin  **********/

    SET s1 = setA->next;
    SET s2 = setB->next;
    SET temp = s2;

    while (s1)
    {
       
        if (find(s1->element,s2))
        {
            continue;
        }
        insert(s1->element, setB);
        
        s1 = s1->next;
    }
    /**********   End   **********/
}

/*
  函数名： printSet
  函数功能：输出集合的元素，以空格作为元素之间分界符
  函数参数：set的头结点
  返回值：无
*/
void printSet(SET set)
{
    //请在此处填写代码，实现输出集合元素的功能，元素之间以空格为分界符
    /**********  Begin  **********/

    while (set->next)
    {
        printf("%d",set->next->element);
        set = set->next;
    }
    printf("\n");


    /**********  End  **********/
}

/*
  函数名： setUnion
  函数功能：求两个集合setA 和 setB的并集
  函数参数：setA和setB的头结点
  返回值：并集集合的头结点
*/
SET setUnion(SET setA, SET setB)
{
    //请在此处填写代码，可直接使用上面已经实现的各操作
    /**********  Begin  **********/
    SET s1 = setA->next;
    SET s2 = setB->next;
    SET temp = s2;
    
    while (s1)
    {

        if (find(s1->element, s2))
        {
            continue;
        }
        insert(s1->element, setB);

        s1 = s1->next;
    }
    return setB;

    /**********  End  **********/
}

/*
  函数名： setIntersect
  函数功能：求两个集合setA 和 setB的交集
  函数参数：setA和setB的头结点
  返回值：交集集合的头结点
*/
SET setIntersect(SET setA, SET setB)
{
    //请在此处填写代码，可直接使用上面已经实现的各操作
    /**********  Begin  **********/
    SET head;
    SET cur = head;
    cur->next = NULL;

    SET s1 = setA->next,s2=setB->next;

    while (s1)
    {
        while (s2)
        {
            if (s1->element==s2->element)
            {
                SET temp;
                temp->element = s1->element;
                cur->next = temp;
                cur = temp;
            }
            s2 = s2->next;
        }
        s1 = s1->next;
    }
    cur->next = NULL;

    return head;
    /**********  End  **********/
}

/*
  函数名： setExcept
  函数功能：求两个集合setA 和 setB的差
  函数参数：setA和setB的头结点
  返回值：结果集合的头结点
*/
SET setExcept(SET setA, SET setB)
{
    //请在此处填写代码，可直接使用上面已经实现的各操作
    /**********  Begin  **********/

    SET head;
    SET cur = head;
    cur->next = NULL;

    SET s1 = setA->next;


    while (s1)
    {
        if (find(s1->element,setB))
        {
            s1 = s1->next;
            continue;
        }
        insert(s1->element,cur);
        s1 = s1->next;
    }
    return head;
    /**********  End  **********/
}

void destroySet(SET set)
{
    //释放存储集合的链表空间，表头为set

    SET cur = set;

    while (cur)
    {
        cur = cur->next;
        free(set);
        set = cur;
    }
}

int main() {
	






    return 0;
}
