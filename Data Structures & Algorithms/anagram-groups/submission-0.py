class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashMap = {}
        for string in strs: # O(m)
            sorted_str = ''.join(sorted(string)) # O(nlogn)
            hashMap.setdefault(sorted_str, [])
            hashMap[sorted_str].append(string)
        
        return [hashMap[key] for key in hashMap]