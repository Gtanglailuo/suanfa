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
//
////左中右
///*
//    思路：中序遍历---左中右
//    先从左节点开始，一路遍历下去，把pre给最左下的结点，然后疯狂的回退结点，更改pre的位置。
//    怎么回退？
//    if (root == NULL) return true;这条语句就是回退
//
//*/
//TreeNode* pre = NULL; // 用来记录前一个节点
//bool isValidBST(TreeNode* root) 
//{
//    if (root == NULL) return true;
//    bool left = isValidBST(root->left);
//
//    if (pre != NULL && pre->val >= root->val) return false;
//    pre = root; // 记录前一个节点
//
//    bool right = isValidBST(root->right);
//    return left && right;
//}
//int main() 
//{
//	//测试程序
//    // 创建一个合法的二叉搜索树
//    TreeNode* rootValid = new TreeNode(4);
//    rootValid->left = new TreeNode(2);
//    rootValid->right = new TreeNode(6);
//    rootValid->left->left = new TreeNode(1);
//    rootValid->left->right = new TreeNode(3);
//    rootValid->right->left = new TreeNode(5);
//    rootValid->right->right = new TreeNode(7);
//
//    std::cout << std::boolalpha << isValidBST(rootValid) << std::endl;
//
//    return 0;
//}
