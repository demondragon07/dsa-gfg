class Solution {
  public:
  bool ispossible(vector<int>&arr,int mid ,int k){
      int n=arr.size();
      int c=1;
      int currsum=0;
      for(int i=0;i<n;i++){
          if(arr[i]>mid) return false;
          currsum+=arr[i];
          if(currsum>mid){
              c++;
              currsum=arr[i];
          }
          if(c>k)return false;
      }
      return true;
  }
  
int minTime(vector<int>& arr, int k) {
        //Hamesha -- Book Allocation Problem
        int n=arr.size();
        int s=0;
        int e=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        if(k>n)return -1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispossible(arr,mid,k)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};