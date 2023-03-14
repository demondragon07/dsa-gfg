//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
      
       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             int right=n-1;
             int left=j;
             int top=i;
             int down=n-1;
             if(j==0 || j==n-1 || i==0 || i==n-1){
                 cout<<"*";
             }else{
                 cout<<" ";
             }
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends