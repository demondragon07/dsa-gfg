class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<int>knowme(n);
        vector<int>Iknow(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    knowme[j]+=1;
                    Iknow[i]+=1;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(Iknow[i]==1 && knowme[i]==n)return i;
        }
        
        return -1;
    }
};