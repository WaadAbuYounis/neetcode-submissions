class Solution:
    def isAlphanumeric(self, ch:str) -> bool:
        if (ord(ch) >= ord('a') and ord(ch) <= ord('z')) or (ord(ch) >= ord('0') and ord(ch) <= ord('9')):
            return True
        return False
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        l , r = 0, len(s)-1
        while l <= r:
            if self.isAlphanumeric(s[l]):
                if self.isAlphanumeric(s[r]):
                    if s[l] != s[r]:
                        return False 
                    r -= 1
                    l += 1
                else:
                    r -= 1
            else:
                l += 1
        return True

        