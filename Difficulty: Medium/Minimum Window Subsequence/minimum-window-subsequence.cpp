class Solution {
  public:
    string minWindow(string& s1, string& s2) {
        int n1=s1.size();
        int n2=s2.size();
        int j=0;
        string ans="";
        int minlen=INT_MAX;
        for(int i=0;i<n1;i++){
            if(s1[i]==s2[j])j++;
            if(j==n2){
                j--;
                int end=i;
                int k=i;
                while(j>=0){
                    if(s1[k]==s2[j])j--;
                    k--;
                }
                k++;
                int len=end-k+1;
                if(len<minlen) {
                    minlen=len;
                    ans=s1.substr(k,minlen);
                }
                i=k;
                j=0;
            }
        }
        return ans;
    }
};
