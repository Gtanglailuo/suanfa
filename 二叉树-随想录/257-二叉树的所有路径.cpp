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
	递归参数：节点               返回值：值
	终止条件：左右节点为空
	单层递归逻辑：

*/
void traversal(TreeNode* cur, vector<int>& path, vector<string>& result)
{
	path.push_back(cur->val);
	if (cur->left == nullptr && cur->right == nullptr)
	{
		//我要存字符串对吧，那么我就要有字符串，而且要保证最后一个字符串后面没有->
		string sPath;
		for (int i = 0; i < path.size() - 1; i++)
		{
			sPath += to_string(path[i]);
			sPath += "->";
		}
		sPath += to_string(path[path.size() - 1]);
		//然后把它放进容器里面
		result.push_back(sPath);
		return;
	}
	if (cur->left)
	{
		traversal(cur->left, path, result);
		path.pop_back();//我学到了vector里面的pop_back函数,这个叫回退
	}
	if (cur->right)
	{
		traversal(cur->right, path, result);
		path.pop_back(); 
	}
}

vector<string> binaryTreePaths(TreeNode* root)
{
	vector<string> result;
	vector<int> path;
	if (root == nullptr)
	{
		return result;
	}
	traversal(root, path, result);
	return result;
}
int main()
{



	return 0;
}
