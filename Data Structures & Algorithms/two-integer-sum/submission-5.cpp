class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen;

        for(int i=0 ; i < nums.size() ; i++){
            if(seen.find(target-nums[i]) != seen.end()){
                return {seen.find(target-nums[i])->second , i};
            }
            seen[nums[i]] = i ; 
        }
    }
};
