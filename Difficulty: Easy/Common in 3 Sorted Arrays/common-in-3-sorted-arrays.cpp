class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
      vector<int>ans;
      int n1=arr1.size();
      int n2=arr2.size();
      int n3=arr3.size();
      int i=0;
      int j=0;
      int k=0;
      while(i<n1 && j<n2 && k<n3){
          if((arr1[i]==arr2[j]) && (arr2[j]==arr3[k])){
              if(ans.empty() || ans.back()!=arr1[i])
                  ans.push_back(arr1[i]);
                 i++;
                  j++;
                  k++;  
              }
          else if(arr1[i]<arr2[j])
              i++;
          else if(arr2[j]<arr3[k])
              j++;
          else
              k++;
       } 
       return ans;
    } 
};