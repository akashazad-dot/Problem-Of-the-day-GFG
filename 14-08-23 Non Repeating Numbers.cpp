class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
      int xor_val=nums[0];
        for(int i=1;i<nums.size();i++)xor_val^=nums[i];
        int last_bit=xor_val&(~(xor_val-1)),x=0,y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(last_bit&nums[i])x^=nums[i];
            else y^=nums[i];
        }
        return {min(x,y),max(x,y)};
    }
};
