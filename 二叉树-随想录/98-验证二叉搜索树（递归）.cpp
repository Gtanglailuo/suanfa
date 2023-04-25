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


//������
/*
    ˼·���������---������
    �ȴ���ڵ㿪ʼ��һ·������ȥ����pre�������µĽ�㣬Ȼ����Ļ��˽�㣬����pre��λ�á�
    ��ô���ˣ�
    if (root == NULL) return true;���������ǻ���

*/
TreeNode* pre = NULL; // ������¼ǰһ���ڵ�
bool isValidBST(TreeNode* root) 
{
    if (root == NULL) return true;
    bool left = isValidBST(root->left);

    if (pre != NULL && pre->val >= root->val) return false;
    pre = root; // ��¼ǰһ���ڵ�

    bool right = isValidBST(root->right);
    return left && right;
}
int main() 
{
    // ����һ���Ϸ��Ķ���������
    TreeNode* rootValid = new TreeNode(4);
    rootValid->left = new TreeNode(2);
    rootValid->right = new TreeNode(6);
    rootValid->left->left = new TreeNode(1);
    rootValid->left->right = new TreeNode(3);
    rootValid->right->left = new TreeNode(5);
    rootValid->right->right = new TreeNode(7);

    std::cout << std::boolalpha << isValidBST(rootValid) << std::endl;

    return 0;
}