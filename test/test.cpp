#include <stdio.h>
void print(int a[], int n)
{//�������Ԫ�أ�����֮����һ���ո�Ϊ�磬���������һ��

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void swap(int *a,int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void max_heapify(int a[], int start,int end)
{
    int dad = start;
    int lson = dad * 2 + 1;
    int rson = dad * 2 + 2;
    if (lson<end && a[dad]<a[lson])
    {
        dad = lson;
    }
    if (rson < end && a[dad] < a[rson])
    {
        dad = rson;
    }
    if (dad != start)//���쳣�ͽ���
    {
        swap(&a[start],&a[dad]);
        max_heapify(a,dad,end);
    }


}
void heapSort(int a[], int n) //
{
    int i;
    for ( i = n/2-1; i>=0; i--)//����
    {
        max_heapify(a,i,n-1);
    }

    for ( i = n-1; i > 0; i--)//�ѶԶ���Ԫ�������һ��Ԫ�ؽ��н���
    {
        swap(&a[0],&a[i]);
        max_heapify(a,0,i);
        print(a,n);
    }
}

//������Ҫ�Լ����������Ҫ�ĺ���



int main(void)
{
    int num;
    scanf("%d", &num);
    int data[1];
    for (int i = 0; i < num; i++)
        scanf("%d", &data[i]);

    heapSort(data, num);
}