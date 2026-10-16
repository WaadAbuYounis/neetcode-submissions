#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> output;
        if(nums.size()==0) return output;

        sort(nums.begin(), nums.end()); 

        for(int i = 0 ; i < nums.size() ; i++){
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }   

            int target = -nums[i];
            if(nums[i] > 0) break;
            int left = i+1;
            int right = nums.size() - 1;
            while(left < right){
                if(nums[left] + nums[right] > target){
                    right--;
                }
                else if(nums[left] + nums[right] < target){
                    left++;
                }
                else{
                    output.push_back({nums[i],nums[left],nums[right]});
                    left++ ; 
                    right-- ; 
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            } 
        }
        
        return output;
    }
};

// --- Test your solution ---
// int main() {
//     // Add a quick local test if helpful
//     return 0;
// }
