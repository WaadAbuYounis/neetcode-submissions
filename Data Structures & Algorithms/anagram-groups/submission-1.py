class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashMap = {}
        for string in strs: # O(m)
            hist = [0] * 26
            for ch in string: # O(n)
                hist[ord(ch) - ord('a')] +=1
            hashMap.setdefault(tuple(hist), [])
            hashMap[tuple(hist)].append(string)
        
        return [hashMap[key] for key in hashMap]