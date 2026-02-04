from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        elements = dict()
        for i, item in enumerate(nums):
            if target - item in elements:
                return [i, elements[target - item]]
            else:
                elements[item] = i
        return [-1, -1]


def main():
    nums = [2, 7, 11, 15]
    target = 9

    sol = Solution()
    result = sol.twoSum(nums, target)

    print("Nums   :", nums)
    print("Target :", target)
    print("Indices:", result)
    print("Values :", [nums[result[0]], nums[result[1]]])


if __name__ == "__main__":
    main()