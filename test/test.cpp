#include <stdio.h>
void compute(int data[], int n, int target)
{//�ڴ˴���д���룬��data�����в����Ƿ��������Ԫ��֮��Ϊtarget������Ҫ�����
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