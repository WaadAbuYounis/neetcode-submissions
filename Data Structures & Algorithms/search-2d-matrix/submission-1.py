class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left,right = 0, len(nums) -1
        while left <= right:
            mid = (left+right) // 2
            if nums[mid] > target:
                right = mid-1
            elif nums[mid] < target:
                left = mid +1
            else:
                return mid
        return -1
    
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m = len(matrix)
        n = len(matrix[0])
        left,right = 0 ,m-1
        while left <= right:
            midRow = (left+right) //2
            if matrix[midRow][0] > target:
                right = midRow-1
            else:
                left = midRow +1
        if right >= 0 and self.search(matrix[right],target) != -1:
            return True
        return False
                
