class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i,num in enumerate(nums):
            
            ind = seen.get(target-num,-1)
            if  ind != -1 and ind != i : 
                return [seen[target-num],i]
            seen[num] = i

                


        