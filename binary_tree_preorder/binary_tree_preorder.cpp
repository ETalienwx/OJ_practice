//�ݹ�汾
class Solution {
public:
    void preorder(TreeNode* root, vector<int> &v)
    {
        if(root == nullptr)
            return;
        v.push_back(root->val);//��
        preorder(root->left, v);//��
        preorder(root->right, v);//��
    }
    vector<int> preorderTraversal(TreeNode* root) {
        //ǰ�������������
        vector<int> v;
        preorder(root, v);
        return v;
    }
};


//�ǵݹ�汾
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while(cur || !st.empty())//cur��Ϊ�ջ���ջ��Ϊ�ն���Ҫ�����ж�
        {
            while(cur)//ѹ��·�ڵ�
            {
                st.push(cur);
                v.push_back(cur->val);
                cur = cur->left;
            }
            //������·�ڵ�ȥ��������
            TreeNode* top = st.top();
            st.pop();
            cur = top->right;
        }
        return v;
    }
};