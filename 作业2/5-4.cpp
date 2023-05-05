
#include <stdio.h>
#include <stdlib.h>

#define SMAX 100    //矩阵中非零元素的最大个数

//三元组
typedef struct {
    int row;     //行下标
    int column;  //列下标
    float value; //数据值
}node;

//稀疏矩阵
typedef struct {
    node data[SMAX]; //用数组存储非零元素的三元组
    int m;           //行数
    int n;           //列数
    int t;           //非零元素个数
} spmatrix;

//打印矩阵
void print_matrix(spmatrix M) {
    for (int i = 1, k = 0; i <= M.m; ++i) {
        for (int j = 1; j <= M.n; ++j) {
            if (i == M.data[k].row && j == M.data[k].column) { //该位置有非零元素
                printf("%5.1f ", M.data[k].value);
                ++k;
            }
            else { //该位置为0
                printf("%5.1f ", 0.0);
            }
        }
        printf("\n");
    }
}

//矩阵加法
spmatrix matrix_add(spmatrix A, spmatrix B) {
    spmatrix C;
    if (A.m != B.m || A.n != B.n) { //矩阵大小不同时返回空矩阵
        C.m = C.n = C.t = 0;
        return C;
    }

    int i = 0, j = 0, k = 0; //当前在A、B、C中处理的非零元素索引
    while (i < A.t && j < B.t) 
    {
        if (A.data[i].row == B.data[j].row) { //行相同
            if (A.data[i].column == B.data[j].column) 
            { //列相同，两元素相加
                if (A.data[i].value + B.data[j].value != 0) 
                { //和不为0，则插入到结果矩阵中
                    C.data[k].row = A.data[i].row;
                    C.data[k].column = A.data[i].column;
                    C.data[k].value = A.data[i].value + B.data[j].value;
                    ++k; //将该元素添加到结果矩阵中，并将三个字母都向后移动一位
                }
                ++i;
                ++j;
            }
            else if (A.data[i].column < B.data[j].column) 
            { //A中对应行的列小于B中对应行的列，说明A中不存在这列的元素，将其直接复制到结果矩阵C中。
                C.data[k] = A.data[i];
                ++i;
                ++k;
            }
            else 
            { //对应的列从B开始找起
                C.data[k] = B.data[j];
                ++j;
                ++k;
            }
        }
        else if (A.data[i].row < B.data[j].row) 
        { //A中对应的行小于B中对应的行，说明A中不存在这行的元素，将其直接复制到结果矩阵C中。
            C.data[k] = A.data[i];
            ++i;
            ++k;
        }
        else 
{ //对应的行从B开始找起
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
    // 初始化稀疏矩阵A
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

    // 初始化稀疏矩阵B
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