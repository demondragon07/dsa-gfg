class Solution {
  public:
    vector<int> countGreater(vector<int> &arr, vector<int> &indices) {
        int n=arr.size();
        vector<int>nge(n);
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i])cnt++;
            }
            nge[i]=cnt;
        }
        vector<int>ans(indices.size());
        for(int i=0;i<indices.size();i++){
            ans[i]=nge[indices[i]];
        }
        return ans;
        
    }
};