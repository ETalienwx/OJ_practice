//The nearest common ancestor of binary tree.
class Solution {
public:
    bool GetPath(TreeNode* root, TreeNode* node, stack<TreeNode*> &path)
    {
        if(root == nullptr)//根节点为空，直接返回false
            return false;
        
        //查找路径
        path.push(root);//节点入栈
        if(root == node)//根节点
            return true;
        
        if(GetPath(root->left, node, path) == true)//左路节点
            return true;
        
        if(GetPath(root->right, node, path) == true)//右路节点
            return true;
        
        path.pop();//左也没有，右也没有，pop这个节点
        
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)     {
        stack<TreeNode*> pPath,qPath;//定义两个路径栈
        GetPath(root, p, pPath);//获得p的路径
        GetPath(root, q, qPath);//获得q的路径
        
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