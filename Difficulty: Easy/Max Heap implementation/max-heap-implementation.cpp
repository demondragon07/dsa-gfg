class maxHeap {
  private:
    // Initialize your data members

  public:
    vector<int>arr;
    void push(int x) {
       arr.push_back(x);
       int idx=arr.size()-1;
       while(idx>0){
           int parent=(idx-1)/2;
           if(arr[idx]>arr[parent]){
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
        int idx=0;
        int n=arr.size();
        while(true){
            int left=2*idx+1;
            int right=2*idx+2;
            int largest=idx;
            if(left<n && arr[left]>arr[largest])largest=left;
            if(right<n && arr[right]>arr[largest])largest=right;
            if(largest==idx)break;
            swap(arr[largest],arr[idx]);
            idx=largest;
        }
    }

    int peek() {
        if(arr.empty())return -1;
        return arr[0];
    }

    int size() {
       return arr.size();
    }
};