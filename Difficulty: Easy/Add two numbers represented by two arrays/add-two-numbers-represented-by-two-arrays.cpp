

class Solution {
  public:
    string calc_Sum(vector<int>& a, vector<int>& b) {
       int n1=a.size();
       int n2=b.size();
       
       int i=n1-1;
       int j=n2-1;
       int carry=0;
       string ans;
       while(i>=0 && j>=0){
          int sum=a[i]+b[j]+carry;
          int digit=sum%10;
          carry=sum/10;
          ans.push_back(digit+'0');
          i--;
          j--;
       }
       
       while(i>=0){
           int sum=a[i]+0+carry;
           int digit=sum%10;
           carry=sum/10;
           ans.push_back(digit+'0');
           i--;
       }
       
         while(j>=0){
           int sum=0+b[j]+carry;
           int digit=sum%10;
           carry=sum/10;
           ans.push_back(digit+'0');
           j--;
       }
       
       while(carry>0){
           int digit=carry%10;
           ans.push_back(digit+'0');
           carry/=10;
       }
       
       reverse(ans.begin(),ans.end());
       return ans;
       
    }
};