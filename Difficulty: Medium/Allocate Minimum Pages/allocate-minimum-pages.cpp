class Solution {
  public:
  bool ispossible(vector<int>&arr, int mid ,int k){
      int currsum=0;
      int p=1;
      int n=arr.size();
      for(int i=0;i<n;i++){
          if(arr[i]>mid) return false;
          currsum+=arr[i];
          if(currsum>mid){
              p++;
              currsum=arr[i];
          }
          if(p>k) return false;
      }
      return true;
  }
    int findPages(vector<int> &arr, int k) {
      int s=0;
      int e=accumulate(arr.begin(),arr.end(),0);
      int ans=-1;
      int n=arr.size();
      if(k>n){
          return ans;
      }
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