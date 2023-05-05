#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct myString
{
    int maxSize;
    int num;
    char* str;
};

myString* InitString(int size)
{
    myString* s = new myString;
    s->maxSize = size;
    s->num = 0;
    s->str = new char[size];
    char temp;
    while (1)
    {
        cin >> temp;
        if (temp=='#'||s->num==s->maxSize)
        {
            break;
        }
        s->str[(s->num)++] = temp;
    }
    return s;
}

bool Compare(myString *s1, myString *s2)
{
    if (s1->num!=s2->num)
    {
        return false;
    }
    int size = s1->num;
    for (int i = 0; i <size ; i++)
    {
        if (s1->str[i]!=s2->str[i])
        {
            return false;
        }

    }
    return true;
}

int main()
{
    myString* s1 = InitString(3);
    myString* s2 = InitString(3);
    if (Compare(s1,s2))
    {
        cout << "相等" << endl;
    }
    else
    {
        cout << "不相等" << endl;
    }

    myString* s3 = InitString(4);
    myString* s4 = InitString(3);
    if (Compare(s3, s4))
    {
        cout << "相等" << endl;
    }
    else
    {
        cout << "不相等" << endl;
    }



    return 0;
}
