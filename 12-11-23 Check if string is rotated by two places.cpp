class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
   bool isRotated(string str1, string str2)
    {
        // Your code here
        int n=str2.size();
        bool flag1=true,flag2=true;
        for(int i=0;i<n;i++)
        {
            if(str2[i]!=str1[(i+2)%n])
            {
                flag1=false;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(str1[i]!=str2[(i+2)%n])
            {
                flag2=false;
            }
        }
        return (flag1||flag2) ;
    }

};
