class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productAll = 1;
        int noZero = 1;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                count++;
                noZero = productAll;
                productAll *= nums[i] ;
            }
            else{
                productAll *= nums[i] ;
                noZero *= nums[i] ;
            }
        }
        vector<int> output;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
               output.push_back(productAll / nums[i]) ;   
            }
            else{
                output.push_back(noZero);
            }
        }
        return output;
    }
};
