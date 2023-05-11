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
//我他妈的乱写的，突然就过了，我的思路还是不清晰，真的奇怪
vector<int> path;
vector<vector<int>> result;
void func(vector<int>& nums,int startIndex)
{
	if (startIndex>=nums.size())
	{
		return;
	}
	for (int i = startIndex; i < nums.size(); i++)
	{
		path.push_back(nums[i]);
		result.push_back(path);
		func(nums,i+1);
		path.pop_back();

	}
}

vector<vector<int>> subsets(vector<int>& nums) 
{
	path.clear();
	result.clear();
	func(nums,0);
	vector<int> v = {};
	result.push_back(v);
	return result;
}

int main()
{



	return 0;
}
