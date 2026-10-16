class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        Map = Counter(nums)
        freq = []
        for i in range(len(nums)+1):
            freq.append([])
        
        for key in Map:
            val = Map[key]
            freq[val].append(key)
        
        res = []
        
        for i in range(len(nums),0 ,-1):
            res += freq[i]
            if len(res) == k :
                return res

