class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& result , vector<int>& currList, int index){
        if(index > nums.size()) return;
        if(index == nums.size()) {
            result.push_back(currList);
            return;
        }

        helper(nums,result,currList,index+1);
        currList.push_back(nums[index]);
        helper(nums,result,currList,index+1);
        currList.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currList;
        helper(nums,result,currList,0);
        return result;
    }
};
