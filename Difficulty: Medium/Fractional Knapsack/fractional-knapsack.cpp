class Solution {
  public:
  
  static bool cmp(vector<int>&a,vector<int>&b){
      double r1=(double)a[0]/(double)a[1];
      double r2=(double)b[0]/(double)b[1];
      return r1>r2;
  }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        vector<vector<int>>item;
        int n=val.size();
        for(int i=0;i<n;i++){
            item.push_back({val[i],wt[i]});
        }
        sort(item.begin(),item.end(),cmp);
        double totalval=0.0;
        for(int i=0;i<n;i++){
            if(item[i][1]<=capacity){
                totalval+=item[i][0];
                capacity-=item[i][1];
            }else{
                totalval+=((double)item[i][0]/(double)item[i][1])*capacity;
                break;
            }
        }
    return totalval;    
    }
};
