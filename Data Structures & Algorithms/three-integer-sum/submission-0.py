class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        
        for index,num in enumerate(nums):
            if num >0:
                break
            if index > 0 and num == nums[index-1]:
                continue 
            l,r = index+1 , len(nums)-1
            while l < r:
                if nums[l] + nums[r] > -num:
                    r -= 1
                elif nums[l] + nums[r] < -num:
                    l += 1
                else:
                    res.append([num,nums[l],nums[r]])
                    r -= 1
                    l += 1
                    while nums[l] == nums[l - 1] and l < r:
                        l += 1
        
        return res

                
