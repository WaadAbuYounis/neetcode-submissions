import math

class Solution:
    def helper(self,piles: List[int], k: int, h: int) -> bool:
        hours_spent = 0
        for pile in piles:
            hours_spent += math.ceil(pile/k)
            if hours_spent > h:
                return False
        return True
    
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        num_piles = len(piles)
        max_pile = max(piles)

        if num_piles == h:
            return max_pile
        
        left = 1
        right = max_pile

        while left < right:
            mid = (left + right) //2

            if self. helper(piles,mid,h):
                right = mid  
            else:
                left = mid + 1
        
        return left

        
        