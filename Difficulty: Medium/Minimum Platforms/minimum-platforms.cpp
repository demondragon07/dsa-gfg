class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0;
        int j=0;
        int n=arr.size();
        int cnt=0;
        int maxcnt=0;
        while(i<n){
            if(arr[i]<=dep[j]){
                cnt++;
                i+=1;
            }else{
                cnt--;
                j+=1;
            }
            maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
    }
};
