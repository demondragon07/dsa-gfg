class Solution {
  public:
    int floorSqrt(int n) {
        int s=0;
        int e=n;
        int result=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long ans=mid*mid;
            if(ans<=n){
                result=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return result;
    }
};