#include <stdio.h>
void compute(int data[], int n, int target)
{//在此处填写代码，在data数组中查找是否存在两个元素之和为target，并按要求输出
  /*-----------begin---------------*/
    int a = -1, b = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (data[i]+data[j]==target)
            {
                a = i;
                b = j;
                printf("%d",a);
                printf("%d", b);
                break;
            }


        }
    }



 /*-----------end---------------*/

}

int main(void)
{
    int a[] = { -3,2,5,9,15,32 };
    int x;
    scanf("%d", &x);
    compute(a, 6, x);
}