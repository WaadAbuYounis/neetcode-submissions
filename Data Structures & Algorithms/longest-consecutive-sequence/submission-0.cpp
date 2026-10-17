class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int counter = 0;
        for(auto num : nums){
            if(seen.find(num-1) == seen.end()){
                int curr = 1;
                int i = 1 ;
                while(seen.find(num+i) != seen.end()){
                    curr++;
                    i++;
                }
                counter = max(counter,curr);
            }
        }

        return counter;

    }
};
