状态F（i）：第i项的值
转移方程：F（i）=F(i-1)+F(i-2)
初始状态：F(1)=F(2)=1
返回值：F(n)


class Solution {
public:
    int Fibonacci(int n) {
        //F(0)=0
        vector<int> F(n+1,0);
        //F(1)=1
        F[1]=1;
        for(int i=2;i<=n;i++)
        {
            //转移方程
            F[i]=F[i-1]+F[i-2];
        }
        return F[n];
    }
};


class Solution {
public:
    int Fibonacci(int n) {
        //优化空间复杂度
        if(n<=0)
            return 0;
        if(n==1||n==2)
            return 1;
        int fn,fn1,fn2;
        fn1=fn2=1;
        for(int i=3;i<=n;i++)
        {
            fn=fn1+fn2;
            fn2=fn1;
            fn1=fn;
        }
        return fn;
    }
};