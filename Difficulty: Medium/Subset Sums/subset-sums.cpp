class Solution {
  public:
  
    void findcombination(vector<vector<int>>&ans,vector<int>ds,vector<int>arr, int i){
        if(i>=arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[i]);
        findcombination(ans,ds,arr,i+1);
        ds.pop_back();
        findcombination(ans,ds,arr,i+1);
    }
    vector<int> subsetSums(vector<int>& arr) {
       vector<vector<int>>ans;
       vector<int>ds;
       findcombination(ans,ds,arr,0);
       vector<int>result;
       for(auto x:ans){
           int sum=accumulate(x.begin(),x.end(),0);
           result.push_back(sum);
       }
        return result;
    }
};