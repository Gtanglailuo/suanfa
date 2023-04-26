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

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
/*
	感受一把递归法



*/

void func(TreeNode* root,unordered_map<int,int> &map)
{
	if (root==nullptr)
	{
		return;
	}
	func(root->left,map);
	if (map.find(root->val)!=map.end())
	{
		map[root->val]++;
	}
	else
	{
		map[root->val] = 1;
		
	}
	func(root->right,map);
}
vector<int> findMode(TreeNode* root) 
{
	unordered_map<int, int> map;
	func(root,map);

	vector<int> modes;
	int max_count = 0;
	//反正我就是一直遍历，没有找到最大的我就不停地放到数组里面，找到了就清空数组，
	//把我已经找到的元素放进去，如果还遍历到的话，继续加
	for (auto it = map.begin(); it != map.end(); it++)
	{
		if (it->second>max_count)
		{
			max_count = it->second;
			modes.clear();
			modes.push_back(it->first);
		}
		else if (it->second==max_count)
		{
			modes.push_back(it->first);
		}
	}
	return modes;
}
int main()
{



	return 0;
}
