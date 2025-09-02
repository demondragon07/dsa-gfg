class Solution {
  public:
   bool ispossible(vector<int>&stalls, int mid, int k){
       int n=stalls.size();
       int c=1;
       int pos=stalls[0];
       for(int i=1;i<n;i++){
           if(stalls[i]-pos>=mid){
               c++;
               pos=stalls[i];
           }
           if(c==k)return true;
       }
       return false;
   }
    int aggressiveCows(vector<int> &stalls, int k) {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int s=0;
        int e=stalls[n-1]-stalls[0];
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(stalls,mid,k)){
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};