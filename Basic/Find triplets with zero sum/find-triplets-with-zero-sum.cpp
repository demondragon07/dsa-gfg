//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        if(n<3){
          return false;
    }
    
     int i,l,r;
        sort(arr,arr+n);
        
      for(int i=0;(i+2)<n; i++){
          r=n-1;
          l=i+1;
          while(l<r){
              int res=arr[i]+arr[l]+arr[r];
                if(res==0){
                    return true;
                }
                else if(res>0){
                    r=r-1;
                }else{
                    l=l+1;
                }
          }
      }
       return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends