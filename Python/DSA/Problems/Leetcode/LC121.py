from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = prices[0]
        maxProfit = 0

        for i in range(1, len(prices)):
            maxProfit = max(maxProfit, prices[i] - minPrice)
            minPrice = min(minPrice, prices[i])
        
        return maxProfit


if __name__ == "__main__":
    sol = Solution()

    test_cases = [
        [7,1,5,3,6,4],   # expected 5
        [7,6,4,3,1],     # expected 0 (no profit possible)
        [1,2,3,4,5],     # expected 4
        [2,4,1],         # expected 2
        [3,3,3,3],       # expected 0
        [5],             # expected 0 (single day)
    ]

    for prices in test_cases:
        print(f"Prices: {prices}")
        print(f"Max Profit: {sol.maxProfit(prices)}\n")
