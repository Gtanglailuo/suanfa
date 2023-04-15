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
  �������� InitSet
  �������ܣ����ݲ���num����ʼ������
  ��������������Ԫ�صĸ���
  ����ֵ������ͷָ��
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
        insert(temp, p); //����insert���������������ݲ��뼯��
    }
    return p;
}


/*
  �������� find
  �������ܣ��ڼ����в���ֵΪdatax�ĳ�Ա
  ����������datax:�����ҵ�ֵ �� set�����ϵ�ͷ���
  ����ֵ���ҵ�ֵΪdatax�ĳ�Ա����1�����򷵻�0
*/
int find(DataType datax, SET  set)
{
    //���ڴ˴���д���룬��set�����в���ֵΪdatax�ĳ�Ա�����ҵ�����1�����򷵻�0
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
  �������� insert
  �������ܣ��ڼ���set�в���ֵΪdatax�ĳ�Ա ������λ���ڱ�ͷ
  ����������datax:�������ֵ �� set�����ϵ�ͷ���
  ����ֵ����
  ʱ�临�Ӷȣ�O��1��
*/
void insert(DataType datax, SET set)
{
    //���ڴ˴���д���룬��datax���뼯��set�� ע���򼯺�Ԫ��������ģ�ֻ�轫�³�Ա�����ͷ
    /**********  Begin  **********/
    SET cur;
    cur->element = datax;
    cur->next = NULL;
    cur->next = set->next;
    set->next = cur;
    /**********   End   **********/
}

/*
  �������� copyList
  �������ܣ�������setA�������ɼ���setB
  ����������setA ��setB��ͷ���
  ����ֵ����
*/
void copySet(SET setA, SET setB)
{
    //���ڴ˴���д���룬ʵ�ֽ�����setA�ĳ�Ա���Ƶ�����setB�Ĺ���
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
  �������� printSet
  �������ܣ�������ϵ�Ԫ�أ��Կո���ΪԪ��֮��ֽ��
  ����������set��ͷ���
  ����ֵ����
*/
void printSet(SET set)
{
    //���ڴ˴���д���룬ʵ���������Ԫ�صĹ��ܣ�Ԫ��֮���Կո�Ϊ�ֽ��
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
  �������� setUnion
  �������ܣ�����������setA �� setB�Ĳ���
  ����������setA��setB��ͷ���
  ����ֵ���������ϵ�ͷ���
*/
SET setUnion(SET setA, SET setB)
{
    //���ڴ˴���д���룬��ֱ��ʹ�������Ѿ�ʵ�ֵĸ�����
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
  �������� setIntersect
  �������ܣ�����������setA �� setB�Ľ���
  ����������setA��setB��ͷ���
  ����ֵ���������ϵ�ͷ���
*/
SET setIntersect(SET setA, SET setB)
{
    //���ڴ˴���д���룬��ֱ��ʹ�������Ѿ�ʵ�ֵĸ�����
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
  �������� setExcept
  �������ܣ�����������setA �� setB�Ĳ�
  ����������setA��setB��ͷ���
  ����ֵ��������ϵ�ͷ���
*/
SET setExcept(SET setA, SET setB)
{
    //���ڴ˴���д���룬��ֱ��ʹ�������Ѿ�ʵ�ֵĸ�����
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
    //�ͷŴ洢���ϵ�����ռ䣬��ͷΪset

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
