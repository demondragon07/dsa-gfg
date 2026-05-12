class Solution {
  public:
     int summation(int i, int n ,int &sum){
         if(i>n)return sum;
         sum+=i;
         summation(i+1,n,sum);
     }
    int sumOfNaturals(int n) {
        int sum=0;
        return summation(1,n,sum);
    }
};