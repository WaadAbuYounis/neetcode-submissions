class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        len1 = len(temperatures)
        result = [0] * len1

        hotStack = [(len1 -1 ,temperatures[-1])]

        for i in range(len1-2,-1,-1):
            if temperatures[i] < hotStack[-1][1]:
                result[i] = hotStack[-1][0] - i
                hotStack.append((i, temperatures[i]))
            else:
                while hotStack and hotStack[-1][1] <=  temperatures[i]:
                    hotStack.pop()
                result[i] = hotStack[-1][0] - i if hotStack else 0
                hotStack.append((i, temperatures[i]))

        return result