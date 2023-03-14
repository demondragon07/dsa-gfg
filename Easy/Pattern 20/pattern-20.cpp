//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int space=2*n-2;
        int star=1;
        int jagah=2;
       for(int i=0;i<2*n-1;i++){
           if(i<n){
           for(int j=0;j<star;j++){
               cout<<"*";
           }
           for(int j=0;j<space;j++){
               cout<<" ";
           }
           for(int j=0;j<star;j++){
               cout<<"*";
           }
           space-=2;
           star+=1;
     }else{
         
           for(int j=0;j<2*n-i-1;j++){
               cout<<"*";
           }
           for(int j=0;j<jagah;j++){
               cout<<" ";
           }
           for(int j=0;j<2*n-i-1;j++){
               cout<<"*";
           }
           jagah+=2;
       }
       cout<<endl;
       } 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends