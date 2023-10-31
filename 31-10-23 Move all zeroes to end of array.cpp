class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   int start=-1;
       for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                start++;
                int temp=arr[i];
                arr[i]=arr[start];
                arr[start]=temp;
            }
        }
	}
};
