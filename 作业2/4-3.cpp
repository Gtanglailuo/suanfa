//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct myString
//{
//    int maxSize;
//    int num;
//    char* str;
//};
//
//myString* InitString(int size)
//{
//    myString* s = new myString;
//    s->maxSize = size;
//    s->num = 0;
//    s->str = new char[size];
//    char temp;
//    while (1)
//    {
//        cin >> temp;
//        if (temp == '#' || s->num == s->maxSize)
//        {
//            break;
//        }
//        s->str[(s->num)++] = temp;
//    }
//    return s;
//}
///*
//写一算法void StrRelace(char *T, char *P, char *S)，
//将T中第一次出现的与P相等的子串替换为S，串S和P的长度不一定相等，
//并分析时间复杂度。
//在T中找P，然后把P替换成S
//*/
////我先找到P在T中的位置
//void StrRelace(char* T, char* P,char*S)
//{
//    int t_len = strlen(T);
//    int p_len = strlen(P);
//    int s_len = strlen(S);
//
//    int i = 0,j=0,index=-1;
//    while (i<t_len && j<p_len)
//    {
//        if (T[i]==P[j])
//        {
//            i++;
//            j++;
//        }
//        else
//        {
//            i = i - j + 1;
//            j = 0;
//        }
//
//    }
//    if (j>=p_len)
//    {
//        index = i - p_len;
//    }
//    cout <<"下标索引=" << index << endl;
//    if (index==-1)
//    {
//        cout << "没有匹配" << endl;
//        return;
//    }
//
//    int addNum = s_len - p_len;
//    cout << "addNum=" << addNum << endl;
//    if (addNum==0)
//    {
//        for (int i = 0; i < s_len; i++)
//        {
//            T[index + i] = S[i];
//        }
//    }
//    else if (addNum>0)
//    {
//        int k = t_len + addNum;
//        char* temp = new char[k]; // 定义中间数组存储替换后T的值
//        for (int i = 0; i < k; i++)
//        {
//            temp[i] = '0';
//        }
//        for (int i = 0; i < index; i++)
//        {
//            temp[i] = T[i];
//        }
//        for (int i = 0; i < s_len; i++)
//        {
//            temp[i+index] = S[i];
//        }
//        int l = 0;
//        for (int i = index+s_len; i < k; i++)
//        {
//            temp[i] = T[(index+p_len+l++)];
//        }
//        T = new char[k];
//        for (int i = 0; i < k; i++)
//        {
//            T[i] = temp[i];
//        }
//        //printf("After replacement: %s\n", temp);
//    }
//    else
//    {
//        int k = t_len + addNum;
//        for (int i = index+p_len; i < t_len; i++)
//        {
//            T[i-2] = T[i];
//        }
//        for (int i = 0; i < s_len; i++)
//        {
//            T[index + i] = S[i];
//        }
//        for (int i = t_len-1; i >= k; i--)
//        {
//            T[i] = ' ';
//        }
//    }
//}
//
//int main()
//{
//    char T[] = "Hello World";
//    char P[] = "ello";
//    char S[] = "ab";
//
//    printf("Before replacement: %s\n", T);
//    StrRelace(T, P, S);
//    printf("After replacement: %s\n", T);
//
//    return 0;
//}
