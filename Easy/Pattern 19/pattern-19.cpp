//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int stars=n;
       for(int i=0;i<n;i++){
           for(int j=0;j<stars;j++){
               cout<<"*";
           }
           int space=2*i;
           for(int j=0;j<space;j++){
               cout<<" ";
           }
           
           for(int j=0;j<stars;j++){
               cout<<"*";
           }
           stars-=1;
          cout<<endl;
       }
         int tara=1;
         int space=(2*n)-(2);
         for(int i=0;i<n;i++){
           for(int j=0;j<tara;j++){
               cout<<"*";
           }
           
           for(int j=0;j<space;j++){
               cout<<" ";
           }
           
           for(int j=0;j<tara;j++){
               cout<<"*";
           }
           tara+=1;
           space-=2;
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