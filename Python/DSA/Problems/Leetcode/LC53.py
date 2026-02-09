from typing import List

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currentSum = nums[0]
        maxSum = currentSum

        for i in range(1, len(nums)):
            currentSum = max(nums[i], currentSum + nums[i])
            maxSum = max(maxSum, currentSum)
        
        return maxSum


if __name__ == "__main__":
    sol = Solution()

    test_cases = [
        [-2,1,-3,4,-1,2,1,-5,4],  # expected 6
        [1],                      # expected 1
        [5,4,-1,7,8],             # expected 23
        [-1,-2,-3,-4],            # expected -1
        [0,0,0,0],                # expected 0
    ]

    for nums in test_cases:
        print(f"Input: {nums}")
        print(f"Max Subarray Sum: {sol.maxSubArray(nums)}\n")
