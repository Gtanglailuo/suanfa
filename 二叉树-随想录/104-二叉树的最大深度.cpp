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
////迭代法
///*
//	思路：既然它是要我求最大的深度，我只要知道它有多少层就可以了，这时层序遍历的可以实现。
//	层序遍历的思路是利用队列来实现的,然后用队列的元素个数借以辅助。
//*/
//int maxDepth1(TreeNode* root)
//{
//	if (root==nullptr)
//	{
//		return 0;
//	}
//	int count = 0;
//
//	//层序遍历部分
//	queue<TreeNode*> que;
//	que.push(root);
//	int size = que.size();
//
//	while (!que.empty())
//	{
//		size = que.size();
//		count++;
//		while (size--)
//		{
//			TreeNode* temp = que.front();
//			que.pop();
//			if (temp->left != nullptr)
//			{
//				que.push(temp->left);
//			}
//			if (temp->right != nullptr)
//			{
//				que.push(temp->right);
//			}
//		}
//	}
//	return count;
//}
//
////递归法
///*
//	参数：   结点（左右结点）         返回值：左右结点的最大值
//	终止条件：结点为空
//	单层逻辑：当前结点=左右结点中最大的（如果左右结点为空，我就返回0，如果左右结点不为空，我就返回左右结点最大的（这就已经开始套娃））
//	如果结点为空，就返回0
//*/
//int maxDepth2(TreeNode* root)
//{
//
//	if (root==nullptr)
//	{
//		return 0;
//	}
//	int left = maxDepth2(root->left);
//	int right = maxDepth2(root->right);
//	return 1 + max(left,right);
//	
//}
//
//
//
//int main() {
//
//
//
//
//
//
//
//	return 0;
//}
