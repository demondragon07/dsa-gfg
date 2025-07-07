class Solution {
    public:
     void firstoccurence(vector<int>&arr, int &ansindex1 , int target){
         int s=0;
         int e=arr.size()-1;
         while(s<=e){
             int mid=s+(e-s)/2;
             if(arr[mid]==target){
                 ansindex1=mid;
                 e=mid-1;
             }
             else if(arr[mid]>target){
                 e=mid-1;
             }else{
                 s=mid+1;
             }
         }
     }
     
     void lastoccurence(vector<int>&arr, int &ansindex2 , int target){
         int s=0;
         int e=arr.size()-1;
         while(s<=e){
             int mid=s+(e-s)/2;
             if(arr[mid]==target){
                 ansindex2=mid;
                 s=mid+1;
             }
             else if(arr[mid]>target){
                 e=mid-1;
             }else{
                 s=mid+1;
             }
         }
     }
    
    
  public:
    int countFreq(vector<int>& arr, int target) {
       int ansindex1=-1;
       int ansindex2=-1;
       firstoccurence(arr,ansindex1,target);
       lastoccurence(arr,ansindex2,target);
       
       int ans=0;
       if(ansindex1!=-1 && ansindex2!=-1)
       ans=ansindex2-ansindex1+1;
       return ans;
    }
};
