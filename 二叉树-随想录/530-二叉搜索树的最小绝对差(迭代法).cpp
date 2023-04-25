//using namespace std;
//#pragma region "Í·ÎÄ¼þ"
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
//
//void GetVector(TreeNode* root,vector<int> &v)
//{
//	if (root==nullptr)
//	{
//		return;
//	}
//	GetVector(root->left,v);
//	v.push_back(root->val);
//	GetVector(root->right,v);
//}
//int getMinimumDifference(TreeNode* root)
//{
//	vector<int> v;
//	GetVector(root,v);
//	int min = v[1] - v[0];
//	for (auto it=v.begin();it!=v.end()-1;it++)
//	{
//		int a = *it;
//		int b = *(it+1);
//		if (min>(b-a))
//		{
//			min = b - a;
//		}
//	}
//	return min;
//
//}
//
//
//
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
//	return 0;
//}
