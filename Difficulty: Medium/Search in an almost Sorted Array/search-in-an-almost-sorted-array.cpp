// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        int s=0;
        int n=arr.size();
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(mid-1>=0 && arr[mid-1]==target){
                return mid-1;
            }
            if(mid+1<n && arr[mid+1]==target){
                return mid+1;
            }
            else if(arr[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
    return -1;    
    }
};