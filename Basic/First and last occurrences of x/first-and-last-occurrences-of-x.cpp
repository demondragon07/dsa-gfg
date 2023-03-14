//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstoccurence(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid;
    
    while(s<=e){
        mid=s+(e-s)/2;
        
        
        if(arr[mid]==key){
        ans=mid;
        e=mid-1;
        
        }
        
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
        mid=s+(e-s)/2;
        
    }
    
    return ans;
    
}

int Lastoccurence(int arr[], int n , int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid;
    
    while(s<=e){
        mid=s+(e-s)/2;
        
        
        if(arr[mid]==key){
        ans=mid;
        s=mid+1;
        
        }
        
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
        mid=s+(e-s)/2;
        
    }
    
    return ans;
    
}

vector<int> find(int arr[], int n , int x )
{
    int y;
    int z;
 vector<int>v;
   y=firstoccurence(arr,n,x);
   z=Lastoccurence(arr,n,x);
   v.push_back(y);
   v.push_back(z);
   
   return v;
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends