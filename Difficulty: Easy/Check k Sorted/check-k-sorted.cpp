class Solution {
  public:
    bool isKSortedArray(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[arr[i]]=i;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(abs(i-mp[arr[i]])>k){
                return false;
                break;
            }
        }
        return true;
    }
};
