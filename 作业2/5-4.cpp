
#include <stdio.h>
#include <stdlib.h>

#define SMAX 100    //�����з���Ԫ�ص�������

//��Ԫ��
typedef struct {
    int row;     //���±�
    int column;  //���±�
    float value; //����ֵ
}node;

//ϡ�����
typedef struct {
    node data[SMAX]; //������洢����Ԫ�ص���Ԫ��
    int m;           //����
    int n;           //����
    int t;           //����Ԫ�ظ���
} spmatrix;

//��ӡ����
void print_matrix(spmatrix M) {
    for (int i = 1, k = 0; i <= M.m; ++i) {
        for (int j = 1; j <= M.n; ++j) {
            if (i == M.data[k].row && j == M.data[k].column) { //��λ���з���Ԫ��
                printf("%5.1f ", M.data[k].value);
                ++k;
            }
            else { //��λ��Ϊ0
                printf("%5.1f ", 0.0);
            }
        }
        printf("\n");
    }
}

//����ӷ�
spmatrix matrix_add(spmatrix A, spmatrix B) {
    spmatrix C;
    if (A.m != B.m || A.n != B.n) { //�����С��ͬʱ���ؿվ���
        C.m = C.n = C.t = 0;
        return C;
    }

    int i = 0, j = 0, k = 0; //��ǰ��A��B��C�д���ķ���Ԫ������
    while (i < A.t && j < B.t) 
    {
        if (A.data[i].row == B.data[j].row) { //����ͬ
            if (A.data[i].column == B.data[j].column) 
            { //����ͬ����Ԫ�����
                if (A.data[i].value + B.data[j].value != 0) 
                { //�Ͳ�Ϊ0������뵽���������
                    C.data[k].row = A.data[i].row;
                    C.data[k].column = A.data[i].column;
                    C.data[k].value = A.data[i].value + B.data[j].value;
                    ++k; //����Ԫ����ӵ���������У�����������ĸ������ƶ�һλ
                }
                ++i;
                ++j;
            }
            else if (A.data[i].column < B.data[j].column) 
            { //A�ж�Ӧ�е���С��B�ж�Ӧ�е��У�˵��A�в��������е�Ԫ�أ�����ֱ�Ӹ��Ƶ��������C�С�
                C.data[k] = A.data[i];
                ++i;
                ++k;
            }
            else 
            { //��Ӧ���д�B��ʼ����
                C.data[k] = B.data[j];
                ++j;
                ++k;
            }
        }
        else if (A.data[i].row < B.data[j].row) 
        { //A�ж�Ӧ����С��B�ж�Ӧ���У�˵��A�в��������е�Ԫ�أ�����ֱ�Ӹ��Ƶ��������C�С�
            C.data[k] = A.data[i];
            ++i;
            ++k;
        }
        else 
{ //��Ӧ���д�B��ʼ����
            C.data[k] = B.data[j];
            ++j;
            ++k;
        }
    }

    while (i < A.t) {
        C.data[k] = A.data[i];
        ++i;
        ++k;
    }

    while (j < B.t) {
        C.data[k] = B.data[j];
        ++j;
        ++k;
    }

    C.m = A.m;
    C.n = A.n;
    C.t = k;

    return C;
}

int main() {
    spmatrix A, B, C;
    // ��ʼ��ϡ�����A
    A.m = 3;
    A.n = 3;
    A.t = 4;
    A.data[0].row = 1;
    A.data[0].column = 2;
    A.data[0].value = 1.0;
    A.data[1].row = 2;
    A.data[1].column = 1;
    A.data[1].value = 2.0;
    A.data[2].row = 2;
    A.data[2].column = 3;
    A.data[2].value = 3.0;
    A.data[3].row = 3;
    A.data[3].column = 3;
    A.data[3].value = 4.0;

    // ��ʼ��ϡ�����B
    B.m = 3;
    B.n = 3;
    B.t = 3;
    B.data[0].row = 1;
    B.data[0].column = 2;
    B.data[0].value = 2.0;
    B.data[1].row = 2;
    B.data[1].column = 1;
    B.data[1].value = -3.0;
    B.data[2].row = 3;
    B.data[2].column = 3;
    B.data[2].value = 4.0;

    C = matrix_add(A, B);
    print_matrix(C);

    return 0;
}