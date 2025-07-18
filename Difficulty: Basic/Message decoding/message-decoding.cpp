bool decode(string S) {
    // your code here
    int n=S.length();
    string ans="hello";
    int j=0;
    for(int i=0;i<n;i++){
       if(S[i]==ans[j]){
           j++;
       } 
    }
    if(j==5)return true;

   return false; 
}