// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int l=0;
        int h=arr.size()-1;
        
         while(l<h){
            if(arr[l]==1 && arr[h]==0){
                swap(arr[l],arr[h]);
                l++;
                h--;
            }else{
                if(arr[l]==0){
                    l++;
                }
                if(arr[h]==1){
                    h--;
                }
            }
        }
        
    }
};