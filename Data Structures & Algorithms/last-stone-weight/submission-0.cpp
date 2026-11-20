class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        for(auto num : stones){
            heap.push(num);
        }
        while(heap.size() > 1){
            int y = heap.top();
            heap.pop();
            int x = heap.top();
            heap.pop();
            if(x == y) continue;
            heap.push(y-x);
        }
        if(heap.empty()) return 0;
        else return heap.top();
    }
};
