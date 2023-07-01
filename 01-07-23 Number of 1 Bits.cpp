class Solution {
  public:
    int setBits(int N) {
    int binaryNum[32];
    vector<int>ans;
    int count=0;
    // counter for binary array
    int i = 0;
    while (N > 0) {
        // storing remainder in binary array
        binaryNum[i] = N % 2;
        N = N / 2;
        i++;
    }
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--){
        ans.push_back(binaryNum[j]);
    }
    for(int k=0;k<ans.size();k++){
        if(ans[k]==1){
            count++;
        }
    }
    
    return count;
    }
};
