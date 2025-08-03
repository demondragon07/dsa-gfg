// User function template for C++

class Solution {
  public:
  
  void multiply(vector<int>&nums,int &size,int multiplier){
      int carry=0;
      for(int i=0;i<size;i++){
         int value=nums[i]*multiplier+carry;
         nums[i]=value%10;
         carry=value/10;
      }
      while(carry>0){
          int value=carry%10;
          nums[size]=value;
          size++;
          carry/=10;
      }
  }
    vector<int> factorial(int n) {
        vector<int>nums(10000,0);
        int size=1;
        nums[0]=1;
        vector<int>ans;
        
        for(int multiplier=2; multiplier<=n; multiplier++){
            multiply(nums,size,multiplier);
        }
        
        for(int i=size-1;i>=0;i--){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};