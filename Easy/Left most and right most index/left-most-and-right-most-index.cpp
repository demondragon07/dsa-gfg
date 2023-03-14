//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    
     int lastocc(vector<long long>v,long long x){
        long long n=v.size();
        long long s=0, e=n-1,ans=-1;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(v[mid]==x){
                ans=mid;
                s=mid+1;
            }else if(v[mid]>x){
                e=mid-1;
                
            }else{
                s=mid+1;
            }
            
        } 
        
        return ans;
    }
    
    
    int firstocc(vector<long long>v,long long x){
        long long n=v.size();
        long long s=0, e=n-1,ans=-1;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(v[mid]==x){
                ans=mid;
                e=mid-1;
            }else if(v[mid]>x){
                e=mid-1;
                
            }else{
                s=mid+1;
            }
            
        } 
        
        return ans;
    }
    
    
    
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<long,long>ans;
        ans={firstocc(v,x),lastocc(v,x)};
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends