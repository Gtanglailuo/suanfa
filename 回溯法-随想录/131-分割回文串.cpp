using namespace std;
#pragma region "头文件"
#include <iostream>
#include <string>
#include <algorithm>
#include<stack>
#include<queue>
#include <vector>
#include <set>
#include<unordered_set>
#include<unordered_map>
#pragma endregin

vector<string> path;
vector<vector<string>> result;
bool isHuiWen(string s)
{
	int size = s.size();
	if (size==0 || size==1)
	{
		return true;
	}
	for (int i = 0; i < size/2; i++)
	{
		if (s[i]!=s[size-i-1])
		{
			return false;
		}
	}
	return true;
}
void func(string s,int startIndex )
{
	//第2步，确定终止条件
	if (startIndex>=s.size())
	{
		result.push_back(path);
		return;
	}

	for (int i = startIndex; i < s.size(); i++)
	{
		//这个函数的具体含义：字符串的起始位置（包括这个字符），下一个表示要截取的长度
		string str = s.substr(startIndex,i-startIndex+1);
		if (isHuiWen(str))
		{
			path.push_back(str);
		}
		else
		{
			continue;
		}
		func(s,i+1);
		path.pop_back();
	}
}

vector<vector<string>> partition(string s) 
{
	path.clear();
	result.clear();
	func(s,0);
	return result;
}

int main()
{
	


	return 0;
}
