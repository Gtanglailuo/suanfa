//using namespace std;
//#pragma region "头文件"
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<stack>
//#include<queue>
//#include <vector>
//#include <set>
//#include<unordered_set>
//#include<unordered_map>
//#pragma endregin
//
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
///*
//	核心思路：
//	1.我先找出最大值也就是我的根
//
//
//
//
//
//
//*/
//int findMaxIndex(vector<int>& nums)
//{
//	int maxIndex = 0;
//	int max = nums[0];
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (max<=nums[i])
//		{
//			maxIndex = i;
//			max = nums[i];
//		}
//	}
//	return maxIndex;
//}
//int findMaxNum(vector<int>& nums)
//{
//	int maxIndex = 0;
//	int max = nums[0];
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (max <= nums[i])
//		{
//			maxIndex = i;
//			max = nums[i];
//		}
//	}
//	return max;
//}
//TreeNode* constructMaximumBinaryTree(vector<int>& nums)
//{
//	if (nums.size()==0)
//	{
//		return nullptr;
//	}
//	if (nums.size()==1)
//	{
//		TreeNode* head = new TreeNode(nums[0]);
//		return head;
//	}
//
//	//寻找最大值的下标和最大值
//	int maxIndex = findMaxIndex(nums);
//	int max = findMaxNum(nums);
//
//	TreeNode* root = new TreeNode(max);
//
//	vector<int> leftNums(nums.begin(),nums.begin()+maxIndex);
//	vector<int> rightNums(nums.begin() + maxIndex+1,nums.end());
//
//	nums.erase(nums.begin()+maxIndex);
//
//	root->left = constructMaximumBinaryTree(leftNums);
//	root->right = constructMaximumBinaryTree(rightNums);
//
//
//	return root;
//}
//int main()
//{
//
//
//
//	return 0;
//}
