from typing import List

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1 = set(nums1)
        set2 = set(nums2)
        return list(set1.intersection(set2))


if __name__ == "__main__":
    sol = Solution()

    test_cases = [
        ([1, 2, 2, 1], [2, 2]),          # expected: [2]
        ([4, 9, 5], [9, 4, 9, 8, 4]),    # expected: [4, 9] (order may vary)
        ([1, 3, 5], [2, 4, 6]),          # expected: []
        ([], [1, 2, 3]),                 # expected: []
        ([7, 7, 7], [7]),                # expected: [7]
    ]

    for i, (nums1, nums2) in enumerate(test_cases, 1):
        result = sol.intersection(nums1, nums2)
        print(f"Test case {i}:")
        print(f"nums1 = {nums1}")
        print(f"nums2 = {nums2}")
        print(f"intersection = {result}")
        print("-" * 30)
