//递归版本
class Solution {
public:
    void preorder(TreeNode* root, vector<int> &v)
    {
        if(root == nullptr)
            return;
        v.push_back(root->val);//中
        preorder(root->left, v);//左
        preorder(root->right, v);//右
    }
    vector<int> preorderTraversal(TreeNode* root) {
        //前序遍历：中左右
        vector<int> v;
        preorder(root, v);
        return v;
    }
};


//非递归版本
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while(cur || !st.empty())//cur不为空或者栈不为空都需要继续判断
        {
            while(cur)//压左路节点
            {
                st.push(cur);
                v.push_back(cur->val);
                cur = cur->left;
            }
            //根据左路节点去访问右树
            TreeNode* top = st.top();
            st.pop();
            cur = top->right;
        }
        return v;
    }
};