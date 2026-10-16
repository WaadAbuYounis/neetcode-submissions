class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        Map = {}
        for num in nums:
            Map[num] = Map.get(num,0) + 1
        
        sorted_by_val = sorted(Map.items(), key= lambda item: item[1], reverse= True)
        return [sorted_by_val[i][0] for i in range(k)]