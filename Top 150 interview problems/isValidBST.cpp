/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* n) {
        if (n == nullptr)
		{
			return true;
		}
		if (n->left != nullptr && findMax(n->left) >= n->val)
		{
			return false;
		}
		if (n->right != nullptr && findMin(n->right) <= n->val)
		{
			return false;
		}
		if (!isValidBST(n->left) || !isValidBST(n->right))
		{
			return false;
		}
		return true;
    }
private:
    int findMax(TreeNode*n)
	{
		if (n == nullptr)
		{
			return 0;
		}
		if (n->right == nullptr)
		{
			return n->val;
		}
		return findMax(n->right);
	}
	int findMin(TreeNode*n)
	{
		if (n == nullptr)
		{
			return 0;
		}
		if (n->left == nullptr)
		{
			return n->val;
		}
		return findMin(n->left);
	}
};