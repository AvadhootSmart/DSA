/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
    void bfs(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelsize = q.size();
            for (int i = 0; i < levelsize; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (i == levelsize - 1)
                    ans.push_back(node->val);

                if (node->left)
                    q.push(node->left);
                    
                if (node->right)
                    q.push(node->right);
            }
        }
    }

public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        bfs(root, ans);
        return ans;
    }
};
