class minHeap {
  private:
    vector<int>arr;

  public:
    
    void push(int x) {
        arr.push_back(x);
        int n=arr.size();
        int idx=n-1;
        while(idx>0){
            int parent=(idx-1)/2;
            if(arr[idx]<arr[parent]){
                swap(arr[idx],arr[parent]);
                idx=parent;
            }
            else break;
        }
    }

    void pop() {
        if(arr.empty()) return;
        arr[0]=arr.back();
        arr.pop_back();
        int n=arr.size();
        int idx=0;
        while(true){
            int left=2*idx+1;
            int right=2*idx+2;
            int smallest=idx;
            if(left<n && arr[left]<arr[smallest])smallest=left;
            if(right<n && arr[right]<arr[smallest])smallest=right;
            if(smallest==idx)break;
            swap(arr[smallest],arr[idx]);
            idx=smallest;
        }
    }

    int peek() {
        if(arr.empty()) return -1;
        return arr[0];
    }

    int size() {
        return arr.size();
    }
};