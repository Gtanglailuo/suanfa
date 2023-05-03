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
/*
	视频看到三分之二就无了

*/

string letterMap[10] = {
"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};

string path;
vector<string> result;

void func(string digits,int index)
{
	if (index == digits.size())
	{
		result.push_back(path);
		return;
	}
	//当前数字所映射的字符串，找到本层数字所代表的字符串
	int a = digits[index] - '0';
	string cur = letterMap[a];
	
	for (int i = 0; i < cur.size(); i++)
	{
		path.push_back(cur[i]);
		func(digits,index+1);
		path.pop_back();
	}

}
vector<string> letterCombinations(string digits) 
{

	func(digits,0);
	return result;
}
int main()
{



	return 0;
}
