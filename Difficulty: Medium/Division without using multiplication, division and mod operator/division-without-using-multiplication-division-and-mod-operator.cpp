// User function Template for C++

class Solution {
  public:
  
     
    long long quotient(long long s, long long e, long long divisor , long long dividend){
        long long ans=-1;
        while(s<=e){
            long long mid=s+((e-s)>>1);
            if(divisor * mid == dividend){
                return mid;
            }
            else if(divisor*mid<dividend){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
      return ans;  
    }
    
    long long divide(long long dividend, long long divisor) {
        long long s=-1*abs(dividend);
        long long e=abs(dividend);
        long long ans=quotient(s,e,abs(divisor),abs(dividend));
        if(divisor>0 && dividend<0 || divisor<0 && dividend >0 ){
            ans=-1*ans;
        }
    return ans;
    }
};