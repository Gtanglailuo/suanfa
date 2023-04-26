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
	����һ�ѵݹ鷨



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
	//�����Ҿ���һֱ������û���ҵ������ҾͲ�ͣ�طŵ��������棬�ҵ��˾�������飬
	//�����Ѿ��ҵ���Ԫ�طŽ�ȥ��������������Ļ���������
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
