class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        maxLen = 0
        seen = set()
        left,right = 0,0
        length = len(s)
         
        while left <=right and right < length:
            if s[right] in seen:
                seen.remove(s[left])
                left += 1
            else:
                seen.add(s[right])
                maxLen = max(maxLen, len(seen))
                right += 1

            

        return maxLen

