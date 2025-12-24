class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
         return a.second<b.second;
    }
    
    int maxMeetings(vector<int>& start, vector<int>& end) {
        if(start.size()==0) return 0;
       vector<pair<int,int>>v;
       for(int i=0;i<start.size();i++){
           v.push_back({start[i],end[i]});
       }
       sort(v.begin(),v.end(),cmp);
       int ans=1;
       int j=0;
       for(int i=1;i<v.size();i++){
           if(v[i].first>v[j].second){
               ans++;
               j=i;
           }
       }   
        return ans;
    }
};