class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        vector<int>nums=arr;
        sort(nums.begin(),nums.end());
        int n=arr.size();
        int s=0;
        int diff=0;
        for(int i=0;i<n;i++){
              if(arr[i]==nums[s]){
                diff=i;
                break;
              }
        }
        return diff-s;
    }
};
