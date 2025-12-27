// User function Template for C++

class Solution {
  public:
    int pageFaults(int N, int C, int pages[]) {
        unordered_set<int>s;
        queue<int>q;
        int ans=0;
        for(int i=0;i<N;i++){
            if(s.find(pages[i])==s.end()){
             ans++;
            if(q.size()==C){
                int lru=q.front();
                q.pop();
                s.erase(lru);
            }
            q.push(pages[i]);
            s.insert(pages[i]);
        }else{
           queue<int>temp;
           while(!q.empty()){
               if(q.front()!=pages[i]){
                   temp.push(q.front());
               }
               q.pop();
           }
           q=temp;
           q.push(pages[i]);
         }
        }
        return ans;
    }
};