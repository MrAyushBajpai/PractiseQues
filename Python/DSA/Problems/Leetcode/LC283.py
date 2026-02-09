from typing import List

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        l = 0
        for r in range(len(nums)):
            if nums[r] != 0:
                nums[l], nums[r] = nums[r], nums[l]
                l += 1


def main():
    sol = Solution()

    test_cases = [
        [0, 1, 0, 3, 12],
        [0, 0, 1],
        [1, 2, 3],
        [0, 0, 0],
        [4, 0, 5, 0, 0, 3, 0, 1]
    ]

    for i, nums in enumerate(test_cases, 1):
        print(f"Test case {i}")
        print("Before:", nums)
        sol.moveZeroes(nums)
        print("After: ", nums)
        print("-" * 30)


if __name__ == "__main__":
    main()
