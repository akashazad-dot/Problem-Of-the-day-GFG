class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        int countFive=0;
        int countTen=0;
        for(int i=0;i<N;i++){
            if(bills[i]==5){
                countFive++;
            }
            else if(bills[i]==10 && countFive!=0){
                countFive--;
                countTen++;
            }
            else if(bills[i]==20 && countFive!=0 && countTen!=0 ){
                countFive--;
                countTen--;
            }
            else if(countFive>=3){
                countFive=countFive-3;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
