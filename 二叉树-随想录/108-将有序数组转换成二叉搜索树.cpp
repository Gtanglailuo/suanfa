using namespace std;
#pragma region "Í·ÎÄ¼þ"
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

TreeNode* func(vector<int>& nums,int left,int right)
{
	if (left>right)
	{
		return nullptr;
	}
	int mid = left + (right - left) / 2;

	TreeNode* root = new TreeNode(nums[mid]);
	root->left = func(nums,left,mid-1);
	root->right = func(nums,mid+1,right);

	return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) 
{

	TreeNode* root = func(nums,0,nums.size()-1);
	return root;
}
int main()
{



	return 0;
}
