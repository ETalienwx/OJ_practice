//The nearest common ancestor (full binary tree)
class LCA {
public:
    int getLCA(int a, int b) {
        while(a!=b)
        {
            if(a>b)
            {
                a/=2;
            }
            else
            {
                b/=2;
            }
        }
        return a;
    }
};