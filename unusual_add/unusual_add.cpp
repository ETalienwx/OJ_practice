class UnusualAdd {
public:
    int addAB(int A, int B) {
        if(B==0)
            return A;
        int x,y;
        x=A^B;
        y=(A&B)<<1;
        return addAB(x,y);
    }
};