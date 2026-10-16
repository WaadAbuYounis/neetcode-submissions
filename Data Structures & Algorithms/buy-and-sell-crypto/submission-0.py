class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profits = [0]  * len(prices)

        for index,price in enumerate(prices):
            max_sell = 0
            for j in range(index+1,len(prices)):
                max_sell = max(prices[j],max_sell)
            profits[index] = max_sell-price
        
        return max(0,max(profits))

