class Solution {
  public:
    
    void heapify_down(vector<int>&arr,int i,int n){
        while(true){
            int largest=i;
            int lchild=2*i+1;
            int rchild=2*i+2;
            if(lchild<n && arr[lchild]>arr[largest])largest=lchild;
            if(rchild<n && arr[rchild]>arr[largest])largest=rchild;
            if(largest==i)break;
            swap(arr[largest],arr[i]);
            i=largest;
        }
    }
    
    int kthLargest(vector<int> &arr, int k) {
        int n=arr.size();
        for(int i=n/2-1;i>=0;i--){
            heapify_down(arr,i,n);
        }
        for(int i=n-1;i>=n-k+1;i--){
            swap(arr[0],arr[i]);
            heapify_down(arr,0,i);
        }
        return arr[0];
    }
};