class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> seen ; 
        int n = nums.size() ;
        for(int i = 0; i < n ; i++){
            seen.insert(nums[i]);
        }
        for(int i = 0 ; i <=n ; i++){
            if(seen.find(i) == seen.end()){
                return i;
            }
        }
    }
};
