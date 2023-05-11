#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include<string.h>
struct huffmanTree
{
    int weight;
    int parent, left, right;
    char* huffCode;
};

void select(huffmanTree*h,int k,int &s1,int &s2)
{
    int sw1=1e9, sw2=1e9;
    //找到第一个最小值
    for (int i = 0; i < k; i++)
    {
        if (h[i].parent==-1 && h[i].weight <sw1)
        {
            s1 = i;
            sw1 = min(sw1,h[i].weight);
        }
    }
    h[s1].parent = 0;//这里表示这个值已经使用过，然后不在使用

    //找到第二个最小值
    for (int i = 0; i < k; i++)
    {
        if (h[i].parent==-1 && h[i].weight <sw2)
        {
            s2 = i;
            sw2 = min(sw2,h[i].weight);
        }
    }
    h[s2].parent = 0;
}
huffmanTree* createHuffmanTree(int w[],int n)
{
    huffmanTree* h = new huffmanTree[2*n-1];

    for (int i = 0; i < 2*n-1; i++)
    {
        h[i].left = h[i].right = h[i].parent = -1;
    }

    for (int i = 0; i < n; i++)
    {
        h[i].weight = w[i];
    }
    //合并操作
    for (int k = n; k < 2*n-1; k++)
    {
        int s1, s2;
        //我向里面传入后来的下标，s1和s2是我更改之后的下标
        select(h,k,s1,s2);
        h[s1].parent = h[s2].parent = k;

        if (h[s1].weight>h[s2].weight)
        {
            swap(s1,s2);
        }
        h[k].left = s1;
        h[k].right = s2;
        h[k].weight = h[s1].weight + h[s2].weight;
    }
    return h;
}
void show(huffmanTree* h, int index)
{
    huffmanTree temp = h[index];

    if (temp.left == -1 && temp.right == -1)
    {
        cout << temp.weight << " " << temp.huffCode << endl;
        return;
    }

    show(h, temp.left);
    

    show(h, temp.right);
    

}
void huffmanCoding(huffmanTree h[],char *huffCode,int n)
{
    
    char* temp = new char[n];
    temp[n - 1] = '\0';
    for (int i = 0; i < n; i++)
    {
        int start = n - 1;
        int pos = i;
        int parent = h[i].parent;
        //我没有修改h里面的其它数据
        while (parent!=-1)
        {
            if (h[parent].left==pos)
            {
                temp[--start] = '0';
            }
            else
            {
                temp[--start] = '1';
            }
            pos = parent;
            parent = h[parent].parent;
        }
        huffCode = new char[n-start];
        strcpy_s(huffCode,n-start,&temp[start]);
        h[i].huffCode = huffCode;
    }
    delete[] temp;
    
}
void print(huffmanTree* h,int n)
{
    cout << "从后往前打印" << endl;
    for (int i = 2*n-2; i >= 0; i--)
    {
        cout << h[i].weight << " "<<"左孩子的下标="<<h[i].left<<" 右孩子的下标="<<h[i].right<<endl;
    }
    cout << endl;
}


int main(void)
{
    int n;
    cin >> n;
    int* nums = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    huffmanTree* h = createHuffmanTree(nums, n);
    
    char* huffCode = new char;
    huffmanCoding(h, huffCode, n);
    show(h, 2 * n - 2);
    



    return 0;
}