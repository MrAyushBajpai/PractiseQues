from typing import List

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        return sorted(x * x for x in nums)


# Sample cases
s = Solution()

print(s.sortedSquares([-4, -1, 0, 3, 10]))
# Expected: [0, 1, 9, 16, 100]

print(s.sortedSquares([-7, -3, 2, 3, 11]))
# Expected: [4, 9, 9, 49, 121]

print(s.sortedSquares([0, 1, 2, 3]))
# Expected: [0, 1, 4, 9]

print(s.sortedSquares([-5, -4, -3, -2, -1]))
# Expected: [1, 4, 9, 16, 25]

print(s.sortedSquares([1]))
# Expected: [1]

print(s.sortedSquares([]))
# Expected: []
