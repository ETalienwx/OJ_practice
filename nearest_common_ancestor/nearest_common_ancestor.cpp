//The nearest common ancestor of binary tree.
class Solution {
public:
    bool GetPath(TreeNode* root, TreeNode* node, stack<TreeNode*> &path)
    {
        if(root == nullptr)//���ڵ�Ϊ�գ�ֱ�ӷ���false
            return false;
        
        //����·��
        path.push(root);//�ڵ���ջ
        if(root == node)//���ڵ�
            return true;
        
        if(GetPath(root->left, node, path) == true)//��·�ڵ�
            return true;
        
        if(GetPath(root->right, node, path) == true)//��·�ڵ�
            return true;
        
        path.pop();//��Ҳû�У���Ҳû�У�pop����ڵ�
        
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)     {
        stack<TreeNode*> pPath,qPath;//��������·��ջ
        GetPath(root, p, pPath);//���p��·��
        GetPath(root, q, qPath);//���q��·��
        
        while(pPath.size() != qPath.size())
        {
            if(pPath.size()>qPath.size())
                pPath.pop();
            else
                qPath.pop();
        }
        
        while(1)
        {
            if(pPath.top() != qPath.top())
            {
                pPath.pop();
                qPath.pop();
            }
            else
            {
                return pPath.top();
            }
        }     
    }
};