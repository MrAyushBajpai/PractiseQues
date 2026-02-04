from typing import List

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        runningSum = []
        total = 0
        for num in nums:
            total += num
            runningSum.append(total)
        return runningSum


def main():
    sol = Solution()

    test_cases = [
        [1, 2, 3, 4],
        [1, 1, 1, 1, 1],
        [3, 1, 2, 10, 1],
        [],
        [-1, 5, -3, 4],
    ]

    for nums in test_cases:
        print(f"Input:  {nums}")
        print(f"Output: {sol.runningSum(nums)}")
        print("-" * 30)


if __name__ == "__main__":
    main()
