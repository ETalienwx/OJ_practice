状态F(i)：跳上i级台阶的方法数
转移方程：F(i)=F(i-1)+F(i-2)+F(i-3)+...+F(0)

F(i-1)：最后一次跳1阶
F(i-2)：最后一次跳2阶
....

F(i-1)=F(i-2)+F(i-3)+...+F(0)
将状态转移方程进行修改：
F(i)=F(i-1)+F(i-1)
F(i)=2*F(i-1)
初始状态：F(1)=1


class Solution {
public:
    int jumpFloorII(int number) {
        //边界控制
        if(number<0)
            return 0;
        //F(1)=1
        int f=1;
        for(int i=2;i<=number;i++)
        {
            f=2*f;
        }
        return f;
        //return 1<<(number-1);
    }
};