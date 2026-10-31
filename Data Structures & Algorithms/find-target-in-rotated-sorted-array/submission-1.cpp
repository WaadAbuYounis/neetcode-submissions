class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = (right+left) / 2;
            if(nums[mid] == target) return mid;
            else if((nums[left] < nums[mid]) && (nums[mid] < nums[right])){
                if(nums[mid] < target) left = mid + 1;
                else right = mid - 1;
            }
            else if((nums[mid] < nums[right] && target <= nums[right] && target > nums[mid]) || (nums[mid] > nums[right] && target >= nums[mid]) || (nums[mid] > nums[right] && target < nums[left])){ // go right
                left = mid + 1;
            }
            else{ //go left
                right = mid - 1;
            }
        }
        return -1;
    }
};
