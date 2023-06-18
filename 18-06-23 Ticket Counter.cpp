class Solution {
  public:
    int distributeTicket(int N, int K) {
        int start = 1;
        int end = N;
        while(start <= end)
        {

            for (int i = 1; i <= K; i++) 
            {
                if(start == end)
                    return start;
                start++;
            }
            for(int i = N; i> (N-K); i--)
            {   
                if(end == start)
                    return end;
                end--;
            }
        }
        return -1;
    }
};
