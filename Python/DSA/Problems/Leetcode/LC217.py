from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for x in nums:
            if x in seen:
                return True
            seen.add(x)
        return False


def main():
    sol = Solution()

    test_cases = [
        ([1, 2, 3, 1], True),          # duplicate exists
        ([1, 2, 3, 4], False),         # no duplicates
        ([1, 1, 1, 3, 3, 4, 3, 2, 4, 2], True),
        ([], False),                   # empty list
        ([10], False),                 # single element
        ([-1, -2, -3, -1], True),      # negatives
    ]

    for i, (nums, expected) in enumerate(test_cases, 1):
        result = sol.containsDuplicate(nums)
        print(f"Test Case {i}: nums = {nums}")
        print(f"Expected: {expected}, Got: {result}")
        print("PASS" if result == expected else "FAIL")
        print("-" * 40)


if __name__ == "__main__":
    main()
