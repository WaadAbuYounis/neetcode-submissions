class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        len1 = len(s1)
        if len(s2) < len1:
            return False
        
        countS1 = Counter(s1)
        countS2 = {}

        
        for i in range(len1): # the first window O(n)
            countS2[s2[i]] = countS2.get(s2[i],0) + 1
        
        
        left = 0
        while left + len1 <= len(s2):
            if countS1 == countS2: # O(26) ?? 
                return True
            if left + len1 == len(s2):
                return False
            countS2[s2[left]] -=1
            if countS2[s2[left]] == 0:
                del countS2[s2[left]]
            countS2[s2[left+len1]] = countS2.get(s2[left+len1],0) + 1
            left += 1

        return False

        