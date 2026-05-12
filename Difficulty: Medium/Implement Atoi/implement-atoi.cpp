class Solution {
  public:
    int myAtoi(string &s) {
        int n=s.size();
        bool started=false;
        bool sign=1;
        long long ans=0;
     for(int i=0;i<n;i++){
        if(!started && s[i]==' ')continue;
        else  if(!started && s[i]=='-')sign=0;
        else if(!started && s[i]=='+')sign=1;
        else {
            started=true;
            if(isdigit(s[i])){
             int digit=s[i]-'0';
              ans=ans*10+digit;
            }
            else break;
            }
     }    
      if(sign==0)ans=-1*ans;
      if(ans>2147483647) return 2147483647;
      if(ans<-2147483648) return -2147483648;
      return ans;    
    }
};
