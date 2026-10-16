class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        len1 = len(s1)
        s1 = ''.join(sorted(s1))

        i = 0

        while i + len1 <= len(s2):
            if ''.join(sorted(s2[i:i+len1])) == s1:
                return True
            i += 1

        return False

        