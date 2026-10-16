class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        length = len(s)
        if k == length:
            return k 
        
        left,right = 0,0
        maxLen = 0
        count = dict()
        while right < length and left <= right:
            count[s[right]] = count.get(s[right],0) + 1
            maxChCount= max(count.values())
            if (right-left + 1) - maxChCount <= k :
                maxLen = max(maxLen, right-left + 1)
                right += 1
            else:
                count[s[left]] -= 1
                left += 1
                right += 1

        return maxLen
