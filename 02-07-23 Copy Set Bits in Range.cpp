class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        for(int i=l;i<=r;i++){
            int num=pow(2,i-1);
            if((num&y)!=0){
                x=x|num;
            }
        }
        return x;
    }
};
