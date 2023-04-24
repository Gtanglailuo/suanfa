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
//思想是什么？
//	1.先找根结点？从后序数组里面找
//	2.根据根结点来切割中序数组，再根据中序数组的切割点的左边来切割后序数组
//	3.左边=左中+左后
//	4.右边=右中+右后
//*/
//TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
//{
//	//如果后序数组没有值，那么整个树就是空的
//	if (postorder.size()==0)
//	{
//		return nullptr;
//	}
//
//	//如果后序数组只有一个值，那么这个树就只有一个结点，这个结点的值是这个数
//	if (postorder.size()==1)
//	{
//		TreeNode* head = new TreeNode(postorder[postorder.size()-1]);
//		return head;
//	}
//	TreeNode* root = new TreeNode(postorder[postorder.size() - 1]);
//	/*寻找根节点的下标*/
//	//如果后续数组有大量的值
//	int valueIndex;//记录这个数的根节点所对应的下标
//	int value = postorder[postorder.size()-1];//根节点的值
//	for (int index = 0; index < postorder.size(); index++)
//	{
//		if (postorder[index]==value)
//		{
//			valueIndex = value; break;
//		}
//	}
//
//	/*切割中序数组和后序数组*/
//	//1.先切割中序数组
//	int inorderIndex=0;//中序数组的切割点下标
//	for (int i = 0; i < inorder.size(); i++)
//	{
//		if (inorder[i]==value)
//		{
//			inorderIndex = i; break;
//		}
//	}
//	vector<int> leftInorder(inorder.begin(),inorder.begin()+inorderIndex);
//	vector<int> rightInorder(inorder.begin() + inorderIndex+1, inorder.end());
//
//	//2.再切割后序数组
//	postorder.resize(postorder.size()-1);
//
//	vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftInorder.size());
//	vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end());
//
//	//最后递归实现
//
//	root->left = buildTree(leftInorder, leftPostorder);
//	root->right = buildTree(rightInorder, rightPostorder);
//
//	return root;
//}
//
//
//
//
//
//int main()
//{
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}
