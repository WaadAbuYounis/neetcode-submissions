class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        hist = [0] * 26
        
        for i in range(len(s)):
            hist[ord(s[i]) - ord('a')] += 1
            hist[ord(t[i]) - ord('a')] -= 1
        
        for num in hist : 
            if num != 0:
                return False

        return True


        