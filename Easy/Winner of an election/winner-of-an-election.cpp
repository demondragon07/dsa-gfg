//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int>s;
        
        for(int i=0;i<n;i++){
            s[arr[i]]++;
        }
        
        string name="";
        int max_vote=0;
        
        for(auto it=s.begin();it!=s.end();it++){
            string key=it->first;
            int value=it->second;
            
            if(value>max_vote){
                max_vote=value;
                name=key;
            }
            
            if(value==max_vote){
                if(key<name){
                    name=key;
                }
            }
        }
        
        vector<string>ans;
        string temp=to_string(max_vote);
        
        ans.push_back(name);
        ans.push_back(temp);
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends