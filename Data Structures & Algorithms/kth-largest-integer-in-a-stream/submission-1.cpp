class KthLargest {
public:
    priority_queue<int>* heap; //max heap
    priority_queue<int>* largest; //min heap
    int k;
    KthLargest(int k, vector<int>& nums) {
        heap = new priority_queue<int>();
        largest = new priority_queue<int>();
        this->k = k;
        for(auto num : nums){
            heap->push(num);
        }
        for(int i = 0 ; i < k-1 ; i++){
            largest->push(-heap->top());
            heap->pop();
        }
    }
    
    int add(int val) {
        if(!largest->empty() && val > -largest->top()){
            heap->push(-largest->top());
            largest->pop();
            largest->push(-val);
            return heap->top();
        }
        else{
            heap->push(val);

            for(int i = 0 ; i < k-1-largest->size(); i++){
                largest->push(-heap->top());
                heap->pop();
            }
            return heap->top();
        }
        
    }
};
