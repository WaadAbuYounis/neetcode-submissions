import heapq
class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:

        time = 0
        count = Counter(tasks)
        max_heap = [(-value, key) for key, value in count.items()]
        heapq.heapify(max_heap)
        queue = []
        
        while max_heap or queue : # one not empty
            if queue:
                 if time >= queue[0][0]:
                    _,val, key = heapq.heappop(queue)
                    heapq.heappush(max_heap,(val,key))
            if max_heap:
                val, key = heapq.heappop(max_heap)
                if val + 1 < 0 :
                    heapq.heappush(queue,(time+n+1 , val+1, key))
            
            time +=1 

        return time



        