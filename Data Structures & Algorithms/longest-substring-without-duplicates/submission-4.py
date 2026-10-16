class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        maxLen = 0
        seen = set()
        left = 0
        length = len(s)
         
        for right in range(length):
            while s[right] in seen:
                seen.remove(s[left])
                left += 1
            seen.add(s[right])
            maxLen = max(maxLen, right - left +1)
        

        return maxLen

