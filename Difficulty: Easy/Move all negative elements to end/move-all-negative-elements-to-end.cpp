class Solution {
  public:
    void segregateElements(vector<int>& arr) {
       vector<int>pos;
       vector<int>neg;
       for(int i=0;i<arr.size();i++){
           if(arr[i]<0){
               neg.push_back(arr[i]);
           }else{
               pos.push_back(arr[i]);
           }
       }
       
       for(int i=0;i<pos.size();i++){
           arr[i]=pos[i];
       }
       for(int i=0;i<neg.size();i++){
           arr[i+pos.size()]=neg[i];
       }
    }
};