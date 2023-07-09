class Solution {
public:
    bool isCousins(TreeNode* root, int p, int q) {
        if (!root)
            return false;
        
        queue<TreeNode*> que;
        que.push(root);
        
        while (!que.empty()) {
            int size = que.size();
            bool isFoundP = false;
            bool isFoundQ = false;
            
            for (int i = 0; i < size; i++) {
                TreeNode* curr = que.front();
                que.pop();
                
                if (curr->val == p)
                    isFoundP = true;
                
                if (curr->val == q)
                    isFoundQ = true;
                
                if (curr->left && curr->right) {
                    if ((curr->left->val == p && curr->right->val == q) ||
                        (curr->left->val == q && curr->right->val == p))
                        return false;
                }
                
                if (curr->left)
                    que.push(curr->left);
                
                if (curr->right)
                    que.push(curr->right);
            }
            
            if (isFoundP && isFoundQ)
                return true;
            if (isFoundP || isFoundQ)
                return false;
        }
        
        return false; 
    }
};
