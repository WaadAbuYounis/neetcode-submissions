class Solution {
public:
    void combSum(vector<int>& nums, int target,int i,vector<int>& currList, vector<vector<int>>& res){
        if(target == 0){
            res.push_back(currList);
            return;
        }
        if(i == nums.size()) return;
        if(target < 0) return;
        combSum(nums,target,i+1,currList,res); // here is the option that we dont take the number and continue
        currList.push_back(nums[i]);
        combSum(nums,target-nums[i],i,currList,res); //here we take the number and continue
        currList.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res(0);
        if(nums.empty()) return res;
        vector<int> currList(0);
        combSum(nums,target,0,currList,res);
        return res;
    }
};
