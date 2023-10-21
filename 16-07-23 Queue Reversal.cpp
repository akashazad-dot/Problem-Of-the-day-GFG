//function Template for C++

//Function to reverse the queue
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        int n=q.size();
        int arr[n];
        for(int i=0;i<=n-1;i++)
        {
            arr[i]=q.front();
            q.pop();
        }
        
        for(int i=n-1;i>=0;i--)
        {
            q.push(arr[i]);
        }
        return q;
      }
};
 
