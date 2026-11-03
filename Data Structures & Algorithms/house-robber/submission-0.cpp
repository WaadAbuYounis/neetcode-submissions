class Solution {
public:
    int rob(vector<int>& nums) {
        for(int i = nums.size()-3 ;  i >= 0; i--){
            if(i + 3 >= nums.size()){
                nums[i] += nums[i + 2];
            }
            else{
                nums[i] += max(nums[i+2],nums[i+3]);
            }
        }
        return *max_element(nums.begin(),nums.end());
    }
};
