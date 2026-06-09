// User function Template for C++
class Solution {
  public:
  
    bool armstrongNumber(int n) {
        int originaln=n;
        int ans=0;
        while(n){
            int rem=n%10;
            ans+=pow(rem,3);
            n/=10;
        }
        
        return ans==originaln; 
        
    }
};