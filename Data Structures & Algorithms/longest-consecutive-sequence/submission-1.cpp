class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int counter = 0;
        for(auto num : seen){
            if(seen.find(num-1) == seen.end()){
                int i = 1 ;
                while(seen.find(num+i) != seen.end()){
                    i++;
                }
                counter = max(counter,i);
            }
        }

        return counter;

    }
};
