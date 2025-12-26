class Solution {
  public:
  static bool mycmp(pair<int,int>&a,pair<int,int>&b){
      if(a.second==b.second)return a.first>b.first;
      return a.second>b.second;
  }
  int find(int x, vector<int>&parent){
     if(parent[x]==x)return x;
     return parent[x]=find(parent[x],parent);
  }
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        vector<int>parent(*max_element(deadline.begin(),deadline.end())+1);
        for(int i=0;i<parent.size();i++){
            parent[i]=i;
        }
        
        vector<pair<int,int>>job;      
        for(int i=0;i<deadline.size();i++){
            job.push_back({deadline[i],profit[i]});
        }
        sort(job.begin(),job.end(),mycmp);
        int profitt=0;
        int cnt=0;
        for(int i=0;i<job.size();i++){
            int slot=find(job[i].first,parent);
            if(slot>0){
                cnt++;
                profitt+=job[i].second;
                parent[slot]=find(slot-1,parent);
            }
        }
        return {cnt,profitt};
    }
};