using namespace std;
#pragma region "ͷ�ļ�"
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
vector<int> path;
vector<vector<int>> result;
void func(vector<int>& candidates, int target,int sum,int index)
{
	if (sum>target)
	{
		return;
	}
	if (sum==target)
	{
		result.push_back(path);
		return;
	}
	//�����i�����Ǵ�0��ʼ�����Ǵ�����ʼ
	for (int i = index; i < candidates.size(); i++)
	{
		sum += candidates[i];
		path.push_back(candidates[i]);
		func(candidates,target,sum,i);
		sum -= candidates[i];
		path.pop_back();
	}
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
{
	path.clear();
	result.clear();
	if (candidates.size()==0)
	{
		return result;
	}
	func(candidates,target,0,0);

	return result;

}

int main()
{



	return 0;
}
